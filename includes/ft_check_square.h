/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 18:44:43 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/02 18:44:43 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_ONE_SQUARE
# define FT_CHECK_ONE_SQUARE
#include "struct.h"

int	ft_check_one_square(int x, int y, square sq, map mp);
square	ft_check_square(int size, map mp);

#endif