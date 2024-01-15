/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:36:36 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 10:30:24 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned int	i;
    char			*str;

    i = 0;
    str = (char *)b;
    while (i < len)
    {
        str[i] = (char)c;
        i++;
    }
    return (b);
}

int main()
{
    char p[50];

    ft_memset(p, 65, 8 );
    printf("%s\n", p);
}