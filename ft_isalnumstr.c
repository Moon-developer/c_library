/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnumstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 17:36:28 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/30 17:44:00 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnumstr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (ft_isalnum(*s) == 1)
			s++;
		else
			return (0);
	}
	return (1);
}
