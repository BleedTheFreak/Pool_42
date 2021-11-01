/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:23:57 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/13 17:27:58 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_do_op(int value1, int value2, void(*f)(int, int))
{
	f(value1, value2);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), ft_add);
		else if (argv[2][0] == '-')
			ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), ft_sub);
		else if (argv[2][0] == '/')
			ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), ft_div);
		else if (argv[2][0] == '*')
			ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), ft_multip);
		else if (argv[2][0] == '%')
			ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), ft_mod);
		else
		{
			ft_putnbr(0);
			write(1, "\n", 1);
		}
	}
	return (0);
}
