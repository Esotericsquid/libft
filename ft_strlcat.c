/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:12:13 by jworden           #+#    #+#             */
/*   Updated: 2019/09/18 19:49:16 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = dlen;
	while (i + 1 < dstsize && src[i - dlen])
	{
		dst[i] = src[i - dlen];
		i++;
	}
	dst[i] = '\0';
	return (slen + (dlen < dstsize ? dlen : dstsize));
}
