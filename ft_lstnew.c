/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:47:47 by jworden           #+#    #+#             */
/*   Updated: 2019/09/23 16:30:18 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*out;

	out = malloc(sizeof(t_list));
	if (out == NULL)
		return (NULL);
	out->content = malloc(content_size);
	if (out->content == NULL)
	{
		free(out);
		return (NULL);
	}
	out->next = NULL;
	if (content == NULL)
	{
		out->content = NULL;
		out->content_size = 0;
		return (out);
	}
	out->content_size = content_size;
	while (content_size--)
		((unsigned char *)(out->content))[content_size] =
			((unsigned char const *)content)[content_size];
	return (out);
}
