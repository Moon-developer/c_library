/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasequal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 07:52:53 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/07 07:56:03 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addequal(char *s)
{
	int		len;
	int		i;
	char	*tmp;

	len = ft_strlen(s) + 1;
	tmp = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (s[i])
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '=';
	tmp[i + 1] = '\0';
	ft_strdel(&s);
	s = ft_strdup(tmp);
	ft_strdel(&tmp);
	return (s);
}
