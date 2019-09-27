/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 17:55:00 by jworden           #+#    #+#             */
/*   Updated: 2019/09/26 19:03:19 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_kdpair	**getbucket(t_hashtable *ht, int key)
{
	if (ht == NULL || ht->table == NULL)
		return (NULL);
	return (ht->table + (key % ht->table_size));
}

void			*ft_hashget(t_hashtable *ht, int key)
{
	t_kdpair	*curr;

	if (ht == NULL || (curr = *(getbucket(ht, key))) == NULL)
		return (NULL);
	while (curr != NULL && curr->key != key)
		curr = curr->next;
	if (curr == NULL)
		return (NULL);
	else
		return (curr->content);
}
