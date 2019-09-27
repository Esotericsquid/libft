/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:21:11 by jworden           #+#    #+#             */
/*   Updated: 2019/09/23 16:35:58 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\v' || c == '\n' || c == '\r' ||
			c == '\f');
}

static int	get_start(const char *str)
{
	size_t	i;

	i = 0;
	while (is_whitespace(str[i]) || str[i] == '0')
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	size_t			i;
	unsigned int	sign;
	int				total;
	int				whitespace;

	whitespace = get_start(str);
	total = 0;
	if (str[(i = whitespace)] == '-')
	{
		sign = 1;
		i++;
	}
	else
	{
		if (str[i] == '+')
			i++;
		sign = 0;
	}
	while (ft_isdigit(str[i]))
		total = (sign) ? (total * 10) - (str[i++] - '0')
			: (total * 10) + (str[i++] - '0');
	if (i > 10 + sign + whitespace)
		return (sign - 1);
	return (total);
}
