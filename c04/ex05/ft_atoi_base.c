/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:28:30 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/06 10:14:32 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_check_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_base_len(char *base)
{
	int	base_l;

	base_l = -1;
	while (base[++base_l])
		if (base[base_l] == 32 || base[base_l] == '+' || base[base_l] == '-'
			|| (base[base_l] >= 7 && base[base_l] <= 13)
			|| ft_check_base(base[base_l], base + base_l + 1) >= 0)
			return (-1);
	if (base_l < 2)
		return (-1);
	return (base_l);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	base_l;
	int	nbr;
	int	index_in_base;

	nbr = 0;
	sign = 1;
	base_l = ft_base_len(base);
	while (*str == 32 || (*str >= 7 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (*str)
	{
		index_in_base = ft_check_base(*str, base);
		if (index_in_base < base_l && index_in_base >= 0)
			nbr = nbr * base_l + index_in_base;
		else
			break ;
		str++;
	}
	return (nbr * sign);
}

int main()
{
	printf("%d",ft_atoi_base("100","01"));
}
