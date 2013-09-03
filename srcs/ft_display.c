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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(char *tab_base, int cord_x, int cord_y, int size)
{
	int		i;

	i = 0;
	while (tab_base[i] != '\0')
	{
		if ()
			ft_putchar('x');
		else
			ft_putchar(tab_base[i]);
		i++;
	}
}

int main()
{
	ft_display(".....\n.....\n.....\n.....\n.....\n", 2, 2, 2);
	return 0;
}