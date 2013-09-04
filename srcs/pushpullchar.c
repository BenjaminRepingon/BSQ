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

/*
**pull all character nessecery for the map in the map's.
*/

void ft_pull_char_first_line(int *countfind, map mp, char *find_char)
{
	if (countfind > 0)
	{
		mp.empty = find_char[countfind - 3];
		mp.obstacle = find_char[countfind - 2];
		mp.print = find_char[countfind - 1];
	}
	else
		mp.error = 1;
}

/*
**Take characters who define the map 
*/

void ft_take_char_first_line(char *buf, int *count, char *find_char, int *countfind)
{
	if (buf[0] == '\n' && count == 0 )
		count = 1;
	else if (buf[0] != '\n'&& count == 0)
	{
		find_char[countfind] = buf[0];
		countfind++;
	}
}
