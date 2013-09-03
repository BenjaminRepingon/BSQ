/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 13:01:33 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/02 13:01:34 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define BUFFSIZE 1
#include <stdlib.h>
#include "st_map.h"

void ft_init(int *x, int *y, int *i, int *fd)
{
	x = 0;
	y = 0;
	i = 0;
	fd = 0;
}

st_map	ft_square_copy(char *av)
{
	int	fd;
	int	ret;
	int	x;
	int	y;
	int	i;
	char	buf[BUFFSIZE + 1];
	st_map	map;

	ft_init(&x, &y, &i, &fd);
	map.mem = (char*)malloc(BUFFSIZE);
	if (av != "")
	{
		if (ft_error("map",(fd = open(av, O_RDONLY))))
			return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (buf[0] == '\n')
			y++;
		if (buf[0] != '\n')
			x++;
		buf[ret] = '\0';
		map.mem[i] = buf[0];
		i++;
	}
	map.mem[i] = '\0';
	if (y != 0)
		x = x / y;
	if (y < x)
		map.max = y;
	else
		map.max = x;
	return (map);
}
