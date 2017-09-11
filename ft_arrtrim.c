/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trimarr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 08:36:54 by mafernan          #+#    #+#             */
/*   Updated: 2017/08/31 10:03:54 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrtrim(char **arr)
{
	char	**trimmed;
	int		i;
	char	*tmp;

	i = ft_arraylen(arr);
	trimmed = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	while (arr[i])
	{
		tmp = ft_strtrim(arr[i]);
		trimmed[i] = ft_strdup(tmp);
		ft_strdel(&tmp);
		i++;
	}
	trimmed[i] = NULL;
	ft_delarray(arr);
	return (trimmed);
}
