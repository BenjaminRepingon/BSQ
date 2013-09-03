/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/28 22:50:51 by espiroux          #+#    #+#             */
/*   Updated: 2013/08/28 22:50:51 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int	ft_error(char *name, int err)
{
	char	*end;

	end = " error.\n";
	if (err == -1)
	{
		ft_putstr(name);
		ft_putstr(end);
		return (1);
	}
	return (0);
}
