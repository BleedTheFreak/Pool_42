/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:32:17 by ytaya             #+#    #+#             */
/*   Updated: 2021/09/23 09:04:31 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printf(char a, char b, char c)
{
	if (a != b && b != c && c != a)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (!(a == '7' && b == '8' && c == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_printf(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
