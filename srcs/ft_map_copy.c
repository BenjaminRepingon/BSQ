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
#define BUFFSIZE 10
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include "function.h"
#include "ft_map.h"
#include "pushpullchar.h"



#include <stdio.h>

/*
**copie file to struct map in the variable mem.
*/
void ft_count_clone_file(map *mp, int fd, char *buf)
{
	int count;
	int i;
	int countfind;

	i = 0;
	count = 0;
	countfind = 0;
	map_init(mp);
	while ((read(fd, buf, BUFFSIZE)))
	{
		if (count == 0)
		{
			mp->mem = cut_first_line_take_char(buf, mp);
			count = 1;
		}
		else
		{
			map_count(mp, buf);
			mp->mem = ft_strstr(mp->mem, buf);
			i++;
		}
		printf("mp.mem:%s\n", mp->mem);
	}
	if (close(fd))
		mp->error = 1;
	ft_map_max(mp);
}

/*
**Copy the map information in a map's structure    
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
	ft_count_clone_file(&mp, fd, buf);
	return (mp);
}