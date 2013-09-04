/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mp_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 13:01:33 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/02 13:01:34 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define BUFFSIZE 1
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include "function.h"

/*
**map initialise
*/

void map_init(map mp)
{
	mp.x = 0;
	mp.y = 0;
	mp.error = 0;
}

/*
**count line of the map.
*/

void map_count(map mp, char *buf)
{
	if (buf[0] == '\n')
		mp.y++;
	if (buf[0] != '\n')
		mp.x++;
}

/*
**copie file to struct map in the variable mem.
*/
void ft_count_clone_file(map mp, int *fd, char *buf)
{
	int count;
	int i;
	int countfind;
	char find_char[13];

	i = 0;
	count = 0;
	countfind = 0;
	map_init(mp);
	while ((ret = read(fd, buf, BUFFSIZE)))
	{
		if (count != 0)
		{
			map_count(mp, buf);
			mp.mem[i] = buf[0];
			i++;
		}
		ft_take_char_first_line(&buf, &count, find_char, &countfind);
		buf[ret] = '\0';
	}
	if (close(fd))
		mp.error = 1;
	mp.mem[i] = '\0';
	ft_pull_char_first_line(&countfind, map mp, &find_char);
	ft_square_max( map mp);
}

/*
**Send, to the structure give in parameter, 
**the value biggest value of the size and 
**x, y max of the tab map.
*/

void ft_square_max(int y, int x, map mp)
{
	if (y != 0)
		x = x / y;
	if (y < x)
	{
		mp.max = y;
		mp.x = x / y;
		mp.y = y;
	}
	else
	{
		mp.max = x;
		mp.x = x;
		mp.y = y;
	}
}

/*
**pull all character nessecery for the map in the map's.
*/

void ft_pull_char_first_line(int *countfind, map mp, char *find_char)
{
	if (countfind > 0)
	{
		mp.empty = find_char[countfind - 2];
		mp.obstacle = find_char[countfind - 1];
		mp.print = find_char[countfind];
	}
	else
		mp.error = 1;
}

/*
**Take characters who define the map 
*/

void ft_take_char_first_line(char *buf, int *count, char *find_char, int *countfind)
{
	if (buf[0] == '\n' && count == 0 )
		count = 1;
	else if (buf[0] != '\n'&& count == 0)
	{
		find_char[countfind] = buf[0];
		countfind++;
	}
}

/*
**Copy the map in a map's structure
**find the min between x and y.     
*/

map	ft_map_copy(char *av, int ac)
{
	int	fd;
	char	buf[BUFFSIZE + 1];
	map	mp;


	fd = 0;
	mp.mem = (char*)malloc(BUFFSIZE);
	if (ac > 1)
	{
		if ((fd = open(av, O_RDONLY)))
		{
			mp.error = 1;
			return (mp);
		}	
	}
	ft_count_clone_file(mp, &fd, buf);
	return (mp);
}