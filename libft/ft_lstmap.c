/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:28:22 by aquinter          #+#    #+#             */
/*   Updated: 2023/09/27 19:49:09 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*aux;
	t_list	*node;
	char	*str;

	head = NULL;
	if (lst != NULL)
	{
		aux = lst;
		while (aux != NULL)
		{
			str = f(aux->content);
			node = malloc(sizeof(t_list));
			if (!str || !node)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			node->content = str;
			node->next = NULL;
			ft_lstadd_back(&head, node);
			aux = aux->next;
		}
	}
	return (head);
}
