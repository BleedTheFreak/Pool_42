/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:09:23 by ytaya             #+#    #+#             */
/*   Updated: 2021/09/28 14:10:00 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	j;

	len = 0;
	while (dest[len])
		len++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';
	return (dest);
}
