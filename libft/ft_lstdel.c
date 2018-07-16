/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 13:23:40 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/14 13:26:21 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	if (alst && del)
	{
		current = *alst;
		while (current)
		{
			next = current->next;
			del(current->content, current->content_size);
			free(current);
			current = next;
		}
	}
	*alst = NULL;
}
