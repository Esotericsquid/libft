/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmake.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 18:02:07 by jworden           #+#    #+#             */
/*   Updated: 2019/09/26 19:15:18 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_hashtable	*ft_hashmake(size_t table_size)
{
	t_hashtable	*out;

	if (table_size == 0)
		return (NULL);
	out = malloc(sizeof(t_hashtable));
	if (out == NULL)
		return (NULL);
	out->table = malloc(sizeof(t_list *) * table_size);
	if (out->table == NULL)
	{
		free(out);
		return (NULL);
	}
	out->table_size = table_size;
	while (table_size--)
		out->table[table_size] = NULL;
	return (out);
}
