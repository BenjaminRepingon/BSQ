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
#include "ft_error.h"
#include "function.h"

/*
**Initialise x and y as i for increment saving of the map    
*/

void ft_init(int *x, int *y, int *i, int *fd)
{
	x = 0;
	y = 0;
	i = 0;
	fd = 0;
}

/*
**Copy the map in a map's structure
**find the min between x and y.     
*/

map	ft_map_copy(char *av, int ac)
{
	int	fd;
	int	ret;
	int	x;
	int	y;
	int	i;
	int count;
	char	buf[BUFFSIZE + 1];
	map	mp;

	i = 0;
	x = 0;
	y = 0;
	fd = 0;
	count = 0;
	mp.error = 0;
	mp.mem = (char*)malloc(BUFFSIZE);
	if (ac > 1)
	{
		if ((fd = open(av, O_RDONLY)))
		{
			mp.error = 1;
			return (mp);
		}
			
	}
	while ((ret = read(fd, buf, BUFFSIZE)))
	{
		if (count != 0)
		{
			if (buf[0] == '\n')
				y++;
			if (buf[0] != '\n')
				x++;
			mp.mem[i] = buf[0];
			i++;
		}
		if (buf[0] == '\n')
			count = 1;
		buf[ret] = '\0';
	}
	if (close(fd))
	{
		mp.error = 1;
	}
	mp.mem[i] = '\0';
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
	return (mp);
}