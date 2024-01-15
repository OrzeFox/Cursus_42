/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:34:06 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/13 11:45:25 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i = 0;
    while (dstsize > 1 && *src != '\0') 
    {
        *dst = *src;
        src++;
        dst++;
        i++;
        dstsize--;
    }
    if (dstsize > 0)
        *dst = '\0';

    while (*src != '\0')
    {
        src++;
        i++;
    }
    return (i);
}