/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jworden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:28:05 by jworden           #+#    #+#             */
/*   Updated: 2019/09/21 23:50:06 by jworden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t		num_words(char const *str, char split)
{
	unsigned int	split_flag;
	unsigned int	count;

	if (str == NULL)
		return (0);
	split_flag = 1;
	count = 0;
	while (*str)
	{
		if (*str == split)
			split_flag = 1;
		else if (split_flag)
		{
			split_flag = 0;
			count++;
		}
		str++;
	}
	return (count);
}

static unsigned int	need_clear(char **tab, size_t i)
{
	if (tab[i])
		return (0);
	while (i--)
		free(*(tab + i));
	free(tab);
	return (1);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**out;
	size_t		count;
	size_t		i;
	size_t		j;

	count = num_words(s, c);
	if (s != NULL && (out = malloc((count + 1) * sizeof(char *))))
	{
		i = 0;
		while (i < count)
		{
			while (*s == c)
				s++;
			j = 0;
			while (s[j] != c && s[j])
				j++;
			out[i] = ft_strsub(s, 0, j);
			if (need_clear(out, i))
				return (NULL);
			i++;
			s += j;
		}
		out[count] = NULL;
	}
	return (s == NULL ? NULL : out);
}
