/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:32:56 by jworden           #+#    #+#             */
/*   Updated: 2019/09/18 09:21:35 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*out;

	if (c)
	{
		i = 0;
		out = NULL;
		while (s[i] != '\0')
		{
			if (s[i] == (char)c)
				out = ((char *)(s + i));
			i++;
		}
		return (out);
	}
	else
		return ((char *)(s + ft_strlen(s)));
}
