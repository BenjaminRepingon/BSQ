/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 13:01:33 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/02 13:01:34 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __STRUC_H__
#	define __STRUC_H__

typedef	struct	st_square
{
	int	boolcheck;
	int x;
	int y;
	int size;
}   square;

typedef struct st_map
{
	char	*mem;
	int	x;
	int	y;
	int	max;
}	map;

#endif
