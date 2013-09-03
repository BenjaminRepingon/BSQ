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

square		ft_square_test(int size, mp)
{
	int		valid;

	valid = ft_check_square(sq.size, mp);
	if (!valid)
	{
		ft_square_test(sq.size / 2, mp);
	}
	else if (valid && !(ft_check_square(sq.size + 1, mp)))
	{
		return (sq);
	}
	else
	{
		ft_square_test(sq.size * 1.5, mp);
	}
	ft_putstr("Error in recursive square test !");
	return (0);
}
