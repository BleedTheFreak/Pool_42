/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:34:11 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/11 10:38:01 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*retab;

	i = 0;
	retab = (int *) malloc(sizeof(int) * length);
	while (i < length)
	{
		retab[i] = f(tab[i]);
		i++;
	}
	return (retab);
}
