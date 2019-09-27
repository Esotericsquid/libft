/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:50:39 by jworden           #+#    #+#             */
/*   Updated: 2019/09/18 11:36:33 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_equal(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	while (needle[i] && haystack[i] && haystack[i] == needle[i])
		i++;
	if (needle[i] == '\0')
		return (1);
	else
		return (0);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (str_equal(haystack + i, needle))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
