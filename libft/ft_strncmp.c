/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:36:21 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/09 11:46:34 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char*)(s1 - 1);
	ptr2 = (unsigned char*)(s2 - 1);
	while ((--n) + 1 && *(++ptr1) == *(++ptr2) && *ptr1 && *ptr2)
		;
	return (*ptr1 - *ptr2);
}
