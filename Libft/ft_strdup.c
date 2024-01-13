/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:56:36 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/13 22:56:36 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *ptr;
    size_t  i;

    i = 0;
    ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (ptr == NULL)
        return (NULL);
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}