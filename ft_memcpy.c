/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:05:36 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/09 11:05:37 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptrdst;
	const char		*ptrsrc;

	i = 0;
	ptrdst = dst;
	ptrsrc = src;
	while (i < n)
	{
		*ptrdst++ = *ptrsrc++;
		i++;
	}
	return (dst);
}
