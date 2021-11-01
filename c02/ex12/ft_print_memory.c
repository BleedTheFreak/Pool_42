/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:22:05 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/14 10:07:46 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	ft_printhex(int nbr)
{
	char base[] = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_printhex(nbr / 16);
		ft_printhex(nbr % 16);
	}
	else
		write(1, &base[nbr], 1);
}
void	ft_printadress(void *str)
{
	ft_printhex((int)str);
}
int main(int argc, char **argv)
{
	//ft_printhex(INT_MAX);
	char str[] = "taya";
	int a = (int) &str;
	if(a < 0)
		ft_printhex(-a);
	else
		ft_printhex(a);
	return (0);
}
