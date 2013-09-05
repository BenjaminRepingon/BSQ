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

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char*  ft_strstr(char *str1, char *str2)
{
	int i;
	int j;
	char *str;
	int str1len;
	int str2len;

	i = 0;
	j = 0;
	str = (char*) malloc ((str1len = ft_strlen(str1)) + (str2len = ft_strlen(str2)) + 1);
	while (j < str1len)
	{
		str[i] = str1[j];
		j++;
		i++;
	}
	j = 0;
	while (j < str2len)
	{
		str[i] = str2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
