/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:16:42 by jworden           #+#    #+#             */
/*   Updated: 2019/09/18 10:49:08 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*out;
	size_t	i;

	len = ft_strlen(s1);
	out = malloc(len + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		out[i] = s1[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
