/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:50:39 by jworden           #+#    #+#             */
/*   Updated: 2019/09/22 00:10:56 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_equal(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && needle[i] && haystack[i] && haystack[i] == needle[i])
		i++;
	if (needle[i] == '\0')
		return (1);
	else
		return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (i < len && haystack[i] != '\0')
	{
		if (str_equal(haystack + i, needle, len - i))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
