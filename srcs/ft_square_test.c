/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 18:44:43 by rbenjami          #+#    #+#             */
/*   Updated: 2013/09/02 18:44:43 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_square.h"
#include "function.h"

square		ft_square_test(int size, map mp)
{
	square	sq;
	square	sq2;

	sq = ft_check_square(size, mp);
	sq2 = ft_check_square(size + 1, mp);
	if (!sq.boolcheck)
	{
		ft_square_test(sq.size / 2, mp);
	}
	else if (sq.boolcheck && !(sq2.boolcheck))
	{
		return (sq);
	}
	else
	{
		ft_square_test(sq.size * 1.5, mp);
	}
	ft_putstr("Error in recursive square test !");
	sq.boolcheck = 0;
	return (sq);
}
