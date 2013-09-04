/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/05 00:13:28 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/05 00:13:29 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

/*
**Send, to the structure give in parameter, 
**the value biggest value of the size and 
**x, y max of the tab map.
*/


void ft_map_max(map *mp)
{
	if (mp->y != 0)
		mp->x = mp->x / mp->y;
	if (mp->y < mp->x)
	{
		mp->max = mp->y;
	}
	else
	{
		mp->max = mp->x;
	}
}

/*
**map initialise
*/

void map_init(map *mp)
{
	mp->x = 0;
	mp->y = 0;
	mp->error = 0;
}

/*
**count line of the map.
*/

void map_count(map *mp, char *buf)
{
	if (buf[0] == '\n')
		mp->y += 1;
	if (buf[0] != '\n')
		mp->x += 1;
}
