/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:52:31 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/15 10:36:53 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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