/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:14:32 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/19 15:16:57 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int main()
// {
//     char *s = "Hello, World!";
//     char c = 'l';
//     char *p;
//
//     p = ft_strrchr(s, c);
//     printf("String starting from last %c is: %s\n", c, p);
//
//     return 0;
// }