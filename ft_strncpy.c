/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:43:19 by jworden           #+#    #+#             */
/*   Updated: 2019/09/17 11:49:59 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		fin;

	i = 0;
	fin = 0;
	while (i < len)
	{
		if (fin || src[i] == '\0')
		{
			fin = 1;
			dst[i] = '\0';
		}
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
