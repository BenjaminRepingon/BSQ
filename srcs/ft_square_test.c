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
#include <stdio.h>

/*
**This function give a size to check_square 
**and find what the size who are the biggest and the top-left,
*/

square		ft_square_test(int size, map mp)
{
	square	sq;
	square	sq2;
	sq = ft_check_square(size, mp);
	sq2 = ft_check_square(size + 1, mp);
	while (!(sq.boolcheck) || sq2.boolcheck)
	{
		if (!sq.boolcheck)
		{
			sq.size = (sq.size / 2);
		}
		else
		{
			sq.size = sq.size + 1;
		}
		sq = ft_check_square(sq.size, mp);
		sq2 = ft_check_square(sq.size + 1, mp);
	}

	return (sq);
}
