/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:03:24 by jworden           #+#    #+#             */
/*   Updated: 2019/09/17 12:09:45 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t offset;

	i = 0;
	while (s1[i])
		i++;
	offset = i;
	i = 0;
	while (s2[i] && i < n)
	{
		s1[i + offset] = s2[i];
		i++;
	}
	s1[i + offset] = '\0';
	return (s1);
}
