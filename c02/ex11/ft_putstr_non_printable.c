/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:41:22 by ytaya             #+#    #+#             */
/*   Updated: 2021/09/27 14:43:35 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_hexa(int nbr)
{
	char	c;

	if (nbr < 16)
	{
		if (nbr < 10)
			c = nbr + 48;
		else
			c = nbr + 87;
		write(1, &c, 1);
	}
	else
	{
		int_to_hexa(nbr / 16);
		int_to_hexa(nbr % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 0 || str[i] > 127)
		{
			ft_putchar('\\');
			int_to_hexa(str[i] + 256);
		}
		else if (str[i] < 32)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			int_to_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
