/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:15:39 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/12 17:43:11 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_base(char *base);
int	ft_check_base(char c, char *base);
int	ft_base_len(char *base);

int	base_len(unsigned int nbr, int len_b)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		i++;
		nbr /= len_b;
	}
	return (i);
}

void	ft_str_insertP(char *dest, char *base, int n, int len)
{
	int	base_l;

	base_l = ft_base_len(base);
	while (len >= 0)
	{
		dest[len--] = base[n % base_l];
		n = n / base_l;
	}
}

void	ft_str_insertN(char *dest, char *base, unsigned int n, int len)
{
	int	base_l;

	base_l = ft_base_len(base);
	while (len >= 1)
	{
		dest[len--] = base[n % base_l];
		n = n / base_l;
	}
}

char	*ft_itoa_base(int nb, char *base)
{
	int		len;
	char	*table;
	long	nbr;

	nbr = (long) nb;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
			len = base_len((unsigned int) -nbr, ft_base_len(base)) + 1;
		else
			len = base_len(-nbr, ft_base_len(base)) + 1;
	}
	else
		len = base_len(nbr, ft_base_len(base));
	table = (char *) malloc(sizeof(char) * len);
	table[len--] = '\0';
	if (nbr < 0)
		table[0] = '-';
	if (nbr < 0)
	{
		ft_str_insertN(table, base, -nbr, len);
	}
	else
		ft_str_insertP(table, base, nbr, len);
	return (table);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (ft_base(base_from) || ft_base(base_to))
		return (0);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}
