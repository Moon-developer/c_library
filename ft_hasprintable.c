/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasprintable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:20:54 by mafernan          #+#    #+#             */
/*   Updated: 2017/08/18 14:28:50 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_hasprintable(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (ft_isspace(*str) == 1)
			str++;
		else
		{
			i++;
			str++;
		}
	}
	return (i);
}
