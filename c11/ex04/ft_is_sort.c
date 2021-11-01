/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:12:56 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/13 16:14:21 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	i = 0;
	descending = 0;
	ascending = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			ascending++;
		if (f(tab[i], tab[i + 1]) <= 0)
			descending++;
		i++;
	}
	if (descending == i || ascending == i)
		return (1);
	return (0);
}
