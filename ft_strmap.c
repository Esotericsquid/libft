/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:03:52 by jworden           #+#    #+#             */
/*   Updated: 2019/09/21 23:34:35 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*out;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	out = malloc(ft_strlen(s) + 1);
	if (out == NULL)
		return (out);
	i = 0;
	while (s[i])
	{
		out[i] = f(s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
