/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 21:26:03 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/03 12:13:33 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		n;

	if (power < 0)
		return (0);
	n = 1;
	if (power == 0)
		return (1);
	else
	{
		while (power != 0)
		{
			n *= nb;
			power--;
		}
	}
	return (n);
}
