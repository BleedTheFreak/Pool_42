/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:15:34 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/05 10:26:37 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (0);
	return (1);
}

void	ft_print(unsigned int nbr, char *base, unsigned int base_len)
{
	while (nbr > base_len - 1)
	{
		ft_print(nbr / base_len, base, base_len);
		nbr %= base_len;
	}
	ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_l;

	base_l = -1;
	while (base[++base_l])
		if (base[base_l] == 32 || (base[base_l] >= 7 && base[base_l] <= 13)
			|| !ft_check_base(base[base_l], base + base_l + 1)
			|| base[base_l] == '+' || base[base_l] == '-')
			return ;
	if (base_l < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print((unsigned int) -nbr, base, base_l);
	}
	else
		ft_print(nbr, base, base_l);
}
