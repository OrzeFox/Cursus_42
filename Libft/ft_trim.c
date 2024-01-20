/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:42:09 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/20 11:41:46 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    if (!s1 || !set)
        return NULL;

    size_t start = 0;
    size_t end = ft_strlen(s1);
    
    while (s1[start] != '\0' && ft_strchr(s1[start], set))
        start++;
    while (end > start && ft_strchr(s1[end - 1], set))
        end--;

    size_t len = end - start;
    char *trim = (char *)malloc(len + 1);
    
    if (!trim)
        return NULL;
        
    size_t i = 0;
    
    while (i < len)
    {
        trim[i] = s1[start + i];
        i++;
    }
    
    trim[len] = '\0';

    return trim;
}

