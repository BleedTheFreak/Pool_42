/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:07:01 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/03 12:20:28 by ytaya            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb += 1;
	}
	return (nb);
}
