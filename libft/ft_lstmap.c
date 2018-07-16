/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 13:32:20 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/14 15:29:31 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*make_map(t_list *lst, t_list *(*f)(t_list *elm), t_list *head)
{
	t_list		*tail;
	t_list		*cur;

	while (lst)
	{
		tail = f(lst);
		if (tail == NULL)
			return (NULL);
		if (head == NULL)
		{
			head = ft_lstnew(tail->content, tail->content_size);
			if (head == NULL)
				return (NULL);
			cur = head;
		}
		else
		{
			cur->next = ft_lstnew(tail->content, tail->content_size);
			if (head == NULL)
				return (NULL);
			cur = cur->next;
		}
		lst = lst->next;
	}
	return (head);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*head;

	head = NULL;
	if (lst && f)
		head = make_map(lst, f, head);
	return (head);
}
