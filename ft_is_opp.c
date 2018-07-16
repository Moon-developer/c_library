/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_opp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 09:27:35 by mafernan          #+#    #+#             */
/*   Updated: 2017/09/08 09:28:53 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_opp(char *s)
{
	int		len;

	len = ft_strlen(s);
	if (len != 1)
		return (0);
	if (*s == '+')
		return (1);
	else if (*s == '-')
		return (1);
	else if (*s == '/')
		return (1);
	else if (*s == '%')
		return (1);
	else if (*s == '*')
		return (1);
	else
		return (0);
}
