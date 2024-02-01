/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:56:05 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:17:14 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función memchr() examina los primeros n bytes 
// del área de memoria apuntada por s en 
// busca de la primera instancia de c.
// Tanto c como los bytes de la memoria apuntada 
// por s se interpretan como valores sin signo.

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *)str;
	ch = (unsigned char)c;
	while (len--)
	{
		if (*ptr == ch)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
