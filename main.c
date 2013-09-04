/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 18:44:43 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/02 18:44:43 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "ft_map_copy.h"
#include "ft_display.h"
#include "ft_square_test.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	square	sq;
	map	mp;
	int	size;

	i = 1;
	if (argc == 1)
	{
		mp = ft_map_copy(argv[0], argc);
		size = mp.max;
		sq = ft_square_test(size, mp);
		ft_display(mp, sq);
	}
	else
	{
		while (i < argc)
		{
			mp = ft_map_copy(argv[i], argc);
			size = mp.max;
			sq = ft_square_test(size, mp);
			//printf("x:%i\ny:%i\nsize:%i\n", sq.x, sq.y, sq.size);
			ft_display(mp, sq);
			i++;
		}
	}
	return (0);
}
