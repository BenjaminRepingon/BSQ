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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(char *tab_base, int sizetab, int cord_x, int cord_y, int size)
{
	int		i;
	int		j;

	i = 0;
	while (tab_base[i] != '\0')
	{
		j = 0;
		while (tab_base[i] != '\n')
		{
			if ((j >= (cord_x) && j < cord_x + size) 
				&& ((i > (cord_x + cord_y * sizetab) 
				&& (i < cord_x + cord_y * (sizetab + 1) + size * (sizetab + 1)))))
				ft_putchar('x');
			else
				ft_putchar(tab_base[i]);
			j++;
			i++;
		}
		ft_putchar('\n');
		i++;
	}
}
