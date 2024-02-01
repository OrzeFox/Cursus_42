/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:14:32 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:55:36 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función strrchr() devuelve un puntero a la última
// aparición del carácter c en la cadena s.

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
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
