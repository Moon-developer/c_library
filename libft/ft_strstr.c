/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:45:21 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/13 16:56:36 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	inner;

	if (little[0] == '\0')
		return ((char *)big);
	while (*big)
	{
		inner = 0;
		while (big[inner] == little[inner])
		{
			if (little[inner + 1] == '\0')
				return ((char *)big);
			inner++;
		}
		big++;
	}
	return (NULL);
}
