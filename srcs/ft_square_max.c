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
#include "st_plateau.h"

void ft_init(int *x, int *y, int *i, int *fd)
{
	x = 0;
	y = 0;
	i = 0;
	fd = 0;
}

st_plateau	ft_square_copy(char *av)
{

	int	fd;
	int	ret;
	int	x;
	int	y;
	int	i;
	char	buf[BUFFSIZE + 1];
	st_plateau	plateau;

	ft_init(&x, &y, &i, &fd);
	plateau.mem = (char*)malloc(BUFFSIZE);
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
		plateau.mem[i] = buf[0];
		i++;
	}
	plateau.mem[i] = '\0';
	if (y != 0)
		x = x / y;
	if (y < x)
		plateau.max = y;
	else
		plateau.max = x;
	return (plateau);
}