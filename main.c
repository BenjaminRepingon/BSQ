/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 12:14:29 by rbenjami          #+#    #+#             */
/*   Updated: 2013/09/02 12:14:29 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int argc, char *argv[])
{
	char	*mem;
	char	buf[BUF_SIZE + 1];
	int		ret;
	int		i;
	int		x;
	int		y;

	ft_init(&i, &x, &y);
	mem = (char*)malloc(BUF_SIZE);
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		if (buf[0] == '\n')
			y++;
		if (buf[0] != '\n')
			x++;
		buf[ret] = '\0';
		mem[i] = buf[0];
		i++;
	}
	mem[i] = '\0';
	if (y != 0)
		x = x / y;
	return (0);
}