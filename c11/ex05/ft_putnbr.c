/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 07:00:55 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/02 08:32:28 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	nbr;
	char			c;

	nbr = (unsigned int) nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = (unsigned int) nb * -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
}
