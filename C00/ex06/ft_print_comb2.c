  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:05:57 by ytaya             #+#    #+#             */
/*   Updated: 2021/09/23 12:10:43 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_int_char(int a)
{
	char	n;
	char	n1;

	n = (a / 10) + 48;
	n1 = (a % 10) + 48;
	write(1, &n, 1);
	write(1, &n1, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			to_int_char(i);
			write(1, " ", 1);
			to_int_char(j);
			if (!(i == 98))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
