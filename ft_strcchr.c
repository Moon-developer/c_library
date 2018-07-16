/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:54:07 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/10 12:54:23 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcchr(const char *s, char c)
{
	char *ptr;

	ptr = (char*)s;
	while (*ptr && *ptr != c)
		ptr++;
	if (*ptr == c)
		return (ptr);
	else
		return (NULL);
}
