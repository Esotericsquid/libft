/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:08:28 by jworden           #+#    #+#             */
/*   Updated: 2019/09/23 16:09:20 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*curr;
	t_list	*start;

	start = f(lst);
	if (start == NULL)
		return (NULL);
	lst = lst->next;
	curr = start;
	while (lst != NULL)
	{
		curr->next = f(lst);
		curr = curr->next;
		if (curr == NULL)
		{
			while (curr != NULL)
			{
				start = curr->next;
				free(curr);
				curr = start;
			}
			return (NULL);
		}
		lst = lst->next;
	}
	return (start);
}
