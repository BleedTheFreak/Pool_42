/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:29:10 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/11 20:37:34 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_div(int a, int b)
{
	if (b != 0)
	{
		ft_putnbr(a / b);
		write(1, "\n", 1);
	}
	else
		ft_putstr("Stop : division by zero\n");
}

void	ft_mod(int a, int b)
{
	if (b != 0)
	{
		ft_putnbr(a % b);
		write(1, "\n", 1);
	}
	else
		ft_putstr("Stop : modulo by zero\n");
}

void	ft_multip(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
}

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}
