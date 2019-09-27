/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:47:26 by jworden           #+#    #+#             */
/*   Updated: 2019/09/18 19:12:58 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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

void				ft_putnbr_fd(int n, int fd)
{
	size_t			i;
	size_t			digits;
	unsigned int	num;

	digits = num_digits(n);
	if (n < 0)
		num = (unsigned int)(-n);
	else
		num = (unsigned int)n;
	i = 0;
	if (n < 0)
		ft_putchar_fd('-', fd);
	i = digits;
	while (i--)
		ft_putchar_fd('0' + ((num / pow(10, i)) % 10), fd);
}
