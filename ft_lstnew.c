/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 12:43:37 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/14 15:29:06 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*cpy;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	cpy = (void *)content;
	if (cpy == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = (void*)malloc(content_size);
		ft_memcpy(new->content, cpy, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
