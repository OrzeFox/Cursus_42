/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:14:32 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/13 14:50:03 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strrchr(const char *s, int c)
{   
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    s +=  i - 1;  
    while (i > 0)
    {
        if (*s == c)
        {
            return (char *)s;
        }
        s--;
        i--;
    }
    if (c == '\0')
    {
        return (char *)s;
    }
    return NULL;
}