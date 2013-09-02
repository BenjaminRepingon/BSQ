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

int		ft_square_test(int size)
{
	int		valid;

	valid = verifcarre(size);
	if (!valid)
	{
		ft_square_test(valid / 2);
	}
	else if (valid && !(verifcarre(size + 1)))
	{
		return (size);
	}
	else
	{
		ft_square_test(valid * 1.5);
	}
	ft_putstr("Error in recursive square test !");
	return (0);
}
