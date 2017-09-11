/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:44:10 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/09 11:46:34 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	len++;
	while (--len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (len--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
