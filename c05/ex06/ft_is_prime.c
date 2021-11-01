/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 07:50:19 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/03 12:18:57 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = nb / 2;
	if (nb < 0)
		return (0);
	else
	{
		if (nb == 2)
			return (1);
		else if (nb % 2 == 0 || nb == 1)
			return (0);
		else if (n % 2 == 0)
			n = (nb / 2) + 1;
		while (n >= 2)
		{
			if (nb % n == 0)
				return (0);
			n -= 2;
		}
	}
	return (1);
}