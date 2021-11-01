/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:26:00 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/12 18:59:59 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		i;
	int		size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range = 0;
		return (range);
	}
	range = (int *) malloc(sizeof(int) * size);
	if (range == NULL)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}	
	return (range);
}
