/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:14:03 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/30 11:24:18 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (w)
			{
				i++;
				w = 0;
			}
		}
		else
		{
			w = 1;
		}
		s++;
	}
	if (w)
		i++;
	return (i);
}

char	*extract_word(const char *s, char c, int *index)
{
	int		start;
	int		len;
	char	*w;
	int		i;

	start = *index;
	while (s[*index] && s[*index] != c)
	{
		(*index)++;
	}
	len = *index - start;
	w = (char *)malloc(sizeof(char) * (len + 1));
	if (!w)
		return (NULL);
	i = 0;
	while (start < *index)
	{
		w[i++] = s[start++];
	}
	w[len] = '\0';
	return (w);
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	char		**str;
	int			j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			str[j] = extract_word(s, c, &i);
			if (!str[j] && (free_split(str), 1))
				return (NULL);
			j++;
		}
	}
	str[j] = (NULL);
	return (str);
}
