/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:50:13 by jworden           #+#    #+#             */
/*   Updated: 2019/09/17 16:08:23 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*out;
	size_t	i;

	out = malloc(size + 1);
	if (out)
	{
		i = 0;
		while (i <= size)
		{
			out[i] = '\0';
			i++;
		}
	}
	return (out);
}
