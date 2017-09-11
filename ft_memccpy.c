/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:04:51 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/13 18:53:45 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		d;
	unsigned char		*ptrdst;
	unsigned const char	*ptrsrc;

	i = 0;
	d = (unsigned char)c;
	ptrdst = (unsigned char*)dst;
	ptrsrc = (unsigned const char*)src;
	while (i < n)
	{
		if ((*ptrdst++ = *ptrsrc++) == d)
			return (ptrdst);
		i++;
	}
	return (NULL);
}
