/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 18:00:30 by jworden           #+#    #+#             */
/*   Updated: 2019/09/26 19:03:30 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_kdpair	**getbucket(t_hashtable *ht, int key)
{
	if (ht == NULL || ht->table == NULL)
		return (NULL);
	return (ht->table + (key % ht->table_size));
}

static t_kdpair	*kdpairmake(int key, const void *content, size_t content_size)
{
	t_kdpair	*out;

	out = malloc(sizeof(t_kdpair));
	if (out == NULL)
		return (NULL);
	out->content = malloc(content_size);
	if (out->content == NULL)
	{
		free(out);
		return (NULL);
	}
	ft_memcpy(out->content, content, content_size);
	out->content_size = content_size;
	out->next = NULL;
	out->key = key;
	return (out);
}

void			ft_hashset(t_hashtable *ht, int key, void const *content,
							size_t content_size)
{
	t_kdpair	**bucket;
	t_kdpair	*curr;

	if (ht == NULL || (bucket = getbucket(ht, key)) == NULL)
		return ;
	if ((curr = *bucket) == NULL)
		*bucket = kdpairmake(key, content, content_size);
	else
	{
		while (curr->next != NULL && curr->key != key)
			curr = curr->next;
		if (curr->key == key)
		{
			free(curr->content);
			curr->content_size = content_size;
			if ((curr->content = malloc(content_size)) == NULL)
				return ;
			ft_memcpy(curr->content, content, content_size);
		}
		else
			curr->next = kdpairmake(key, content, content_size);
	}
}
