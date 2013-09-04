/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mp_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 13:01:33 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/02 13:01:34 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define BUFFSIZE 1
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include "ft_error.h"
#include "function.h"

/*
**Initialise x and y as i for increment saving of the map    
*/

void ft_init(int *x, int *y, int *i, int *fd)
{
	x = 0;
	y = 0;
	i = 0;
	fd = 0;
}

/*
**Copy the map in a map's structure
**find the min between x and y.     
*/

map	ft_map_copy(char *av, int ac)
{
	int	fd;
	int	ret;
	int	x;
	int	y;
	int	i;
	int countfind;
	int count;
	char find_char[13];
	char	buf[BUFFSIZE + 1];
	map	mp;

	i = 0;
	x = 0;
	y = 0;
	fd = 0;


	count = 0;
	countfind = 0;



	mp.error = 0;	
	mp.mem = (char*)malloc(BUFFSIZE);
	

	if (ac > 1)
	{
		if ((fd = open(av, O_RDONLY)))
		{
			mp.error = 1;
			return (mp);
		}
			
	}
	while ((ret = read(fd, buf, BUFFSIZE)))
	{
		if (count != 0)
		{
			if (buf[0] == '\n')
				y++;
			if (buf[0] != '\n')
				x++;
			mp.mem[i] = buf[0];
			i++;
		}


		/*
		**sauvegarde de la premiere ligne pour la gestion des caractere.
		*/

		if (buf[0] == '\n' && count == 0 )
			count = 1;
		else if (buf[0] != '\n'&& count == 0)
		{
			find_char[countfind] = buf[0];
			countfind++;
		}
		buf[ret] = '\0';


	}

	/*
	**closing file.
	*/

	if (close(fd))
		mp.error = 1;
	mp.mem[i] = '\0';


	/*
	**ajout des caractere a la structure.
	*/
	if (countfind > 0)
	{
		mp.empty = find_char[countfind - 2];
		mp.obstacle = find_char[countfind - 1];
		mp.print = find_char[countfind];
	}
	else
		mp.error = 1;





	
	

	
	/*
	**Square max.
	*/

	if (y != 0)
		x = x / y;
	if (y < x)
	{
		mp.max = y;
		mp.x = x / y;
		mp.y = y;
	}
	else
	{
		mp.max = x;
		mp.x = x;
		mp.y = y;
	}
	

	return (mp);
}