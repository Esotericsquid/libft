/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:33:02 by jworden           #+#    #+#             */
/*   Updated: 2019/09/21 23:51:08 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		iswhitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static size_t	find_end(char const *s)
{
	size_t	end;

	if (*s == '\0')
		return (0);
	end = ft_strlen(s) - 1;
	while (iswhitespace(s[end]) && end > 0)
		end--;
	return (end);
}

static size_t	find_start(char const *s)
{
	size_t	start;

	start = 0;
	while (iswhitespace(s[start]) && s[start])
		start++;
	if (s[start])
		return (start);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char	*out;
	size_t	start;
	size_t	end;
	size_t	i;

	if (s == NULL)
		return (NULL);
	end = find_end(s);
	start = find_start(s);
	out = malloc((end - start) + 2);
	if (out == NULL)
		return (out);
	i = 0;
	if (end)
	{
		while (i + start <= end)
		{
			out[i] = s[start + i];
			i++;
		}
	}
	out[i] = '\0';
	return (out);
}
