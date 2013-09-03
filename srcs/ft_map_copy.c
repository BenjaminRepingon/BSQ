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

void ft_init(int *x, int *y, int *i, int *fd)
{
	x = 0;
	y = 0;
	i = 0;
	fd = 0;
}

map	ft_map_copy(char *av, int ac)
{

	int	fd;
	int	ret;
	int	x;
	int	y;
	int	i;
	char	buf[BUFFSIZE + 1];
	map	mp;

	ft_init(&x, &y, &i, &fd);
	mp.mem = (char*)malloc(BUFFSIZE);
	if (ac < 2)
	{
		if (ft_error("mp",(fd = open(av, O_RDONLY))))
			return (mp);
	}
	while ((ret = read(fd, buf, BUFFSIZE)))
	{
		if (y < 1)
		{
			y++;
		}
		else
		{
			if (buf[0] == '\n')
				y++;
			if (buf[0] != '\n')
				x++;
		}
		buf[ret] = '\0';
		mp.mem[i] = buf[0];
		i++;
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
