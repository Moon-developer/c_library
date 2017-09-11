/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:04:37 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/13 18:51:44 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** Simplifies the process of using malloc in a function by auto using malloc
 ** within this function to any input when used.
*/

void	*ft_memalloc(size_t size)
{
	unsigned char	*len;

	len = (unsigned char*)malloc(sizeof(char) * size);
	if (len == NULL)
		return (NULL);
	return (ft_memset(len, 0, size));
}
