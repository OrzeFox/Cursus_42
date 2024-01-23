/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:14:03 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/22 21:14:03 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    char **str;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    if (!s || !(str = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1))))
        return (NULL);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            if (!(str[j] = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
                return (NULL);
            while (s[i] && s[i] != c)
                str[j][k++] = s[i++];
            str[j++][k] = '\0';
            k = 0;
        }
    }
    str[j] = NULL;
    return (str);
}