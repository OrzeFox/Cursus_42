/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:38:13 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:34:11 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función memcpy() copia n bytes del área de memoria src a la memoria dest. 
// Si dest y src se superponen, 
// el comportamiento no está definido.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dest);
}
