/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 17:57:18 by jworden           #+#    #+#             */
/*   Updated: 2019/09/26 18:22:56 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	kdpairfree(t_kdpair *kd, void (*del)(void *, size_t))
{
	del(kd->content, kd->content_size);
	free(kd);
}

void		ft_hashfree(t_hashtable *ht, void (*del)(void *, size_t))
{
	size_t		i;
	t_kdpair	*curr;
	t_kdpair	*temp;

	i = 0;
	while (i < ht->table_size)
	{
		if ((curr = ht->table[i]) != NULL)
		{
			while (curr != NULL)
			{
				temp = curr->next;
				kdpairfree(curr, del);
				curr = temp;
			}
		}
		i++;
	}
	free(ht->table);
	free(ht);
}
