/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 18:44:43 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/02 18:44:43 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char *argv[])
{
	int i;
	st_square square;
	st_plateau plateau;

	i = 1;
	if (argc == 1)
		ft_map_copy("");
	else
	{
		while (i < argc)
		{
			map = ft_map_copy(argv[i]);
			i++;
		}
		ft_square
	}
	return (0);
}