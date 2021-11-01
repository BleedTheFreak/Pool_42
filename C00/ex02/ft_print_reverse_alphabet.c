/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reverse_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:05:10 by ytaya             #+#    #+#             */
/*   Updated: 2021/09/22 08:58:06 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	alpha;

	alpha = 'z';
	++alpha;
	while (alpha-- > 'a')
	{
		ft_putchar(alpha);
	}
}
