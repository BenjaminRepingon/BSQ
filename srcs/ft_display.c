/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 18:44:43 by rbenjami          #+#    #+#             */
/*   Updated: 2013/09/02 18:44:43 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "function.h"
#include <unistd.h>
#include "struct.h"
#include "function.h"

/*
**Display the map and add the square with
**origin(x, y) and size.
*/

void	ft_display(map mp, square sq)
{
	int		i;
	int		j;

	i = 0;
	while (mp.mem[i] != '\0')
	{
		j = 0;
		while (mp.mem[i] != '\n')
		{
			if ((j >= (sq.x) && j < sq.x + sq.size) 
				&& ((i >= (sq.x + sq.y * mp.x) 
				&& (i < sq.x + sq.y * (mp.x + 1) + sq.size * (mp.x + 1)))))
				ft_putchar(mp.print);
			else
				ft_putchar(mp.mem[i]);
			j++;
			i++;
		}
		ft_putchar('\n');
		i++;
	}
}
