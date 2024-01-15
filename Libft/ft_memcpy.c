/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:38:13 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/15 10:30:12 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
