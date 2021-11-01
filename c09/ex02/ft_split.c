/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:50:55 by ytaya             #+#    #+#             */
/*   Updated: 2021/10/14 13:22:49 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int	ft_get_words(char *str, char *charset)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset))
		{
			n++;
			while (!ft_is_charset(str[i + 1], charset) && str[i + 1])
				i++;
		}
		i++;
	}
	return (n);
}

void	ft_strucpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !ft_is_charset(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**table;
	int		i;
	int		j;
	char	*from;

	table = (char **) malloc(sizeof(char) * ft_get_words(str, charset) + 1);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset))
		{
			from = &str[i];
			while (str[i + 1] && !ft_is_charset(str[i + 1], charset))
			{
				i++;
			}
			table[j] = (char *) malloc(255);
			ft_strucpy(table[j], from, charset);
			j++;
		}
		i++;
	}
	table[j] = 0;
	return (table);
}
int main(int ac ,char **av)
{
	char **ptr = ft_split(av[1]," \n \t");
	int i = 0;
	while (i <= ac)
	{
		printf("%s\n",ptr[i]);
		i++;
	}
}
