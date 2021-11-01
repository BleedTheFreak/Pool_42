/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:44:17 by ytaya             #+#    #+#             */
/*   Updated: 2021/09/29 15:57:35 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[len])
		len++;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp(to_find, &str[i], len) == 0)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
