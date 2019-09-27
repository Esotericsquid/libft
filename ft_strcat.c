/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:50:49 by jworden           #+#    #+#             */
/*   Updated: 2019/09/18 09:24:30 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	offset;

	i = 0;
	while (s1[i] != '\0')
		i++;
	offset = i;
	i = 0;
	while (s2[i])
	{
		s1[i + offset] = s2[i];
		i++;
	}
	s1[i + offset] = '\0';
	return (s1);
}
