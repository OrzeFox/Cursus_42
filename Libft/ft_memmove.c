/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:01:18 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/13 11:25:54 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = dst;
    unsigned const char *s = src;

    if (d == s || len == 0)
    {
        return (dst);
    }

    if(d < s || d >= s + len)
    {
        while( len > 0)
        {
        *d = *s;
        src++;
        dst++;
        len--;
        }
    return (dst);
    }
    else 
    {
        d += len - 1;
        s += len - 1;
        {
            while( len > 0)
            {
            *d = *s;
            src--;
            dst--;
            len--;
            }
        }
    }
}