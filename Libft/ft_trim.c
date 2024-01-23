/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:42:09 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/23 17:10:48 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start_index(const char *s, const char *set)
{
	size_t	start;

	start = 0;
	while (s[start] != '\0' && ft_strchr(set, s[start]))
		start++;
	return (start);
}

static size_t	get_end_index(const char *s, const char *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s);
	while (end > start && ft_strchr(set, s[end - 1]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = get_start_index(s1, set);
	end = get_end_index(s1, set, start);
	len = end - start;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[len] = '\0';
	return (trim);
}
