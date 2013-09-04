/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 13:01:33 by rbenjami          #+#    #+#             */
/*   Updated: 2013/09/02 13:01:34 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**Display a character
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
**Display a string of character
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

/*
**Copy "src" string to "dest" string.
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = src[count];
	return (dest);
}