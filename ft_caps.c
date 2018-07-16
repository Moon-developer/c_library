/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 07:45:21 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/18 10:24:55 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupr(char *str)
{
	char	*temp;
	int		i;
	int		n;

	i = ft_strlen(str);
	temp = (char *)malloc(sizeof(char) * (i + 1));
	i = -1;
	n = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			temp[n] = str[i] - 32;
		else
			temp[n] = str[i];
		n++;
	}
	temp[n] = '\0';
	ft_strdel(&str);
	return (temp);
}
