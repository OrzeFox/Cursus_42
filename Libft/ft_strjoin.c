/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:40:08 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/20 15:08:49 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	char	*concat;

	a = 0;
	b = 0;
	concat = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !concat)
		return (NULL);
	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		concat[a] = s2[b];
		a++;
		b++;
	}
	concat[a] = '\0';
	return (concat);
}
