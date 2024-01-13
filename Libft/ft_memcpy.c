/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:38:13 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/13 11:11:38 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{

    unsigned char *d = dest;
    unsigned const char *s = src;
    while( n > 0)
    {
        *d = *s;
        s++;
        d++;
        n--;
    }
    return (dest);
}
