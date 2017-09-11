/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadenho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 17:29:05 by jbadenho          #+#    #+#             */
/*   Updated: 2017/07/29 17:29:08 by jbadenho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** The ft_sstrlen() function will return the size of the char **s.
**
** RETURN VALUES:
**  SUCCESS: int of the size of **s
**  FAILURE: int zero
*/

int	ft_sstrlen(char **s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
