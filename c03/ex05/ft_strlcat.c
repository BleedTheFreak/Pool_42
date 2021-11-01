/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:02:48 by ytaya             #+#    #+#             */
/*   Updated: 2021/09/29 17:34:35 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int				i;
	unsigned int				dest_len;
	unsigned int				src_len;

	dest_len = 0;
	src_len = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && dest_len + i < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size > dest_len)
		return (src_len + dest_len);
	else
		return (src_len + size);
}
int 	main()
{
	char dest[20] = "Yassine";
	char src[]= "taya";
	printf("%u",ft_strlcat(dest,src,5));
	printf("%s",dest);
}
