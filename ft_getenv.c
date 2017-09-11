/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:45:06 by mafernan          #+#    #+#             */
/*   Updated: 2017/07/08 14:57:27 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char const		*ft_getenv(t_sub key)
{
	int							i;
	extern char const *const	*environ;

	i = -1;
	while (environ[++i] != NULL)
		if (ft_memcmp(environ[i], key.str, key.length) == 0
				&& environ[i][key.length] == '=')
			return (environ[i] + key.length + 1);
	return (NULL);
}	
