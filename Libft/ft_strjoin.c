/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:40:08 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/15 17:01:40 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t a = 0;
    size_t b = 0;   
    char *concat = malloc(ft_strlen(s1) + ft_strlen(s2) + 1); 
    if (!s1 || !s2 || !concat) 
        return NULL;
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

    return concat;
}