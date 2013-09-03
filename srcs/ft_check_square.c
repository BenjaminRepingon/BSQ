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
void ft_init(int *i, int *j, int *k, int *l, st_square *square)
{
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	square.boolverif = 0;
}

st_square ft_check_square(st_square square, st_plateau plateau)
{
	int l;
	int k;
	int j;
	int i;

	ft_init(&i, &j, &k, &l, square);
	while (l < ((plateau.x - square.size) * plateau.y))
	{
		while (k < (plateau.x - square.size))
		{
			while (J < ((plateau.x - square.size) + k + l))
			{
				while (i < square.size)
				{
					if (plateau.mem[i + j + k + l] == 'o')
						return (square);
				}
				i = 0;
				j = (plateau.x + 1) + j + k + l;
			}
			j = 0;
			k++;
		}
		k = 0;
		l = (x + 1) + l;
	}
	square.boolverif = 1;
	return (square);
}
