/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushpullchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/05 00:12:40 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/05 00:12:43 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "function.h"
#include <stdlib.h>

/*
**pull all character necessary for the map in the map's.
*/

void ft_pull_char_first_line(int countfind, map *mp, char *find_char)
{
	if (countfind > 0)
	{
		mp->empty = find_char[countfind - 3];
		mp->obstacle = find_char[countfind - 2];
		mp->print = find_char[countfind - 1];
	}
	else
		mp->error = 1;
}

/*
**cut the beggin of the string and take character 
**for understand the map. 
*/

char* cut_first_line_take_char(char *buf,map *mp)
{
	char *cutchar;
	int buflen;
	int nlen;
	int i;

	i = 0;
	nlen = 0;
	buflen = ft_strlen(buf);
	while (buf[nlen] != '\n')
		nlen++;
	cutchar = (char*) malloc(buflen - nlen);
	while (i < (buflen - nlen))
	{
		cutchar[i] = buf[i + nlen];
		i++;
	}
	ft_pull_char_first_line(nlen, mp, buf);
	return (cutchar);
}

/*
**Take characters who define the map 
*/

void ft_take_char_first_line(char *buf, char *find_char, int *countfind)
{
	if (buf[0] != '\n')
	{
		find_char[*countfind] = buf[0];
		*countfind += 1;
	}
}
