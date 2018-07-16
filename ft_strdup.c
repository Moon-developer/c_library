/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:24:56 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/19 11:08:21 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = ft_strnew(ft_strlen(s1))))
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup_notab(char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = ft_strnew(ft_strlen(s1))))
		return (NULL);
	while (s1[i])
	{
		if (s1[i] == 9)
			dest[i] = ' ';
		else
			dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
