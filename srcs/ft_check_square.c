/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 18:44:43 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/02 18:44:43 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "struct.h"
#include <stdio.h>

int ft_check_one_square(int x, int y, square sq, map mp)
{
	int fx;
	int fy;

	fx = 0;
	fy = 0;
	while (fy < sq.size)
	{
		fx = 0;
		while (fx < sq.size)
		{	
			if (mp.mem[(fx + x) + (mp.x + 1) * (y + fy)] == 'o')
				return (0);
			fx++;			
		}
		fy++;
	}
	return (1);
}

square	ft_check_square(int size, map mp)
{
	int	x;
	int	y;
	square sq;
	printf("%d\n", size);
	y = 0;
	sq.size = size;
	sq.boolcheck = 0;
	while (y < ((mp.y + 1) - sq.size))
	{
		x = 0;
		while (x < (mp.x - sq.size))
		{
			//printf("%d\n", x + y);
			if (ft_check_one_square(x, y, sq, mp))
			{
				sq.x = x;
				sq.y = y;
				sq.boolcheck = 1;
				//printf("regard ckeck x:%d\ny:%d\nbool:%d\n", sq.x, sq.y, sq.boolcheck);
				return (sq);
			}
			/*else
				x = x + sq.size;*/
			x++;
		}
		y++;
	}
	sq.x = -1;
	sq.y = -1;
	return (sq);
}
/*
int main()
{
	map mp;
	square sq;

	sq.size = 5;
	mp.x = 10;
	mp.y = 10;
	mp.max = 100;
	mp.mem = "..........\n......o...\n.....o....\n.o........\n..........\n..o.......\n........o.\n..........\n....o.....\n..........\n";
	ft_check_square(sq.size, mp);
	printf("size:%i\nboolcheck:%i\n", sq.size, sq.boolcheck);
	return 0;
}*/
