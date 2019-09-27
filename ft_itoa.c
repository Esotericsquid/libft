/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:06:30 by jworden           #+#    #+#             */
/*   Updated: 2019/09/18 18:53:40 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	num_digits(int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static unsigned int	pow(unsigned int a, unsigned int b)
{
	unsigned int out;

	out = 1;
	while (b--)
		out *= a;
	return (out);
}

char				*ft_itoa(int n)
{
	size_t			i;
	size_t			digits;
	char			*out;
	unsigned int	num;

	digits = num_digits(n);
	if (n < 0)
		num = (unsigned int)(-n);
	else
		num = (unsigned int)n;
	out = malloc(digits + 1 + (n < 0));
	if (out == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
		*(out++) = '-';
	i = digits;
	while (i--)
		out[digits - 1 - i] = '0' + ((num / pow(10, i)) % 10);
	out[digits] = '\0';
	if (n < 0)
		out--;
	return (out);
}
