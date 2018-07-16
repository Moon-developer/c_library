/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheukelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:03:58 by rheukelm          #+#    #+#             */
/*   Updated: 2017/06/14 15:55:18 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;

	if (*small == '\0')
		return ((char *)big);
	i = ft_strlen(small);
	while (*big != '\0' && len-- >= i)
	{
		if (*big == *small && ft_memcmp(big, small, i) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
