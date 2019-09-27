/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:55:21 by jworden           #+#    #+#             */
/*   Updated: 2019/09/21 22:55:01 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;

	if (n == 0)
		return (0);
	src1 = s1;
	src2 = s2;
	while (n-- && *src1++ == *src2++)
		;
	return (*(src1 - 1) - *(src2 - 1));
}
