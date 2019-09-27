/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:20:40 by jworden           #+#    #+#             */
/*   Updated: 2019/09/21 23:39:57 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*out;

	if (s == NULL)
		return (NULL);
	out = malloc(len + 1);
	if (out)
	{
		i = 0;
		while (i < len)
		{
			out[i] = s[i + start];
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}
