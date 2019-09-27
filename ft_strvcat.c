/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strvcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:00:18 by jworden           #+#    #+#             */
/*   Updated: 2019/09/24 13:07:22 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strvcat(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*out;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	out = malloc(len1 + len2 + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < (len1 + len2))
	{
		if (i < len1)
			out[i] = s1[i];
		else
			out[i] = s2[i - len1];
		i++;
	}
	out[i] = '\0';
	return (out);
}
