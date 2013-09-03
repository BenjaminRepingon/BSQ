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

void	ft_init(int *i, int *j, int *l, square *sq)
{
	i = 0;
	j = 0;
	l = 0;
	sq->boolcheck = 0;
}

square	ft_check_square(square sq, map mp)
{
	int	l;
	int	k;

	while (y < mp.y)
	{
		while (x < mp.x)
		{
			if (mp.mem[x + (mp.x) * y] == 'o')
				sq.boolcheck = 0;
			x++;
		}
		y++;
	}
	return (sq);
}

int main()
{
	map mp;
	square sq;

	sq.size = 2;
	mp.x = 6;
	mp.y = 3;
	mp.max = 3;
	mp.mem = ".ooo..\no.....\n......\n";
	ft_check_square(sq, mp);
	printf("origin:%i\nsize:%i\nboolcheck:%i\n", sq.origin, sq.size, sq.boolcheck);
	return 0;
}
