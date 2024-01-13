/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:52:31 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/13 12:23:03 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i = 0;
   
    while(*dst != '\0')
    {
        i++;
        dst++;
    }
    if(*src == '\0')
        return(i);
     while (*src != '\0' && i < dstsize - 1)
    {
        *dst = *src;
        dst++;
        src++;
        i++;
    }
    *dst = '\0';
    
    while (*src != '\0')
    {
        src++;
        i++;
    }
    return (i);
}