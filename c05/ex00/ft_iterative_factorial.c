/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 20:54:57 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/03 12:12:43 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb != 1 && nb != 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}