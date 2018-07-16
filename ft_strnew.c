/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:44:27 by mafernan          #+#    #+#             */
/*   Updated: 2017/10/01 13:29:39 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*set;

	if (!(set = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(set, '\0', size + 1);
	return (set);
}
