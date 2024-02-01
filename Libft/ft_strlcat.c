/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:52:31 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 12:03:30 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función strlcat() concatena la cadena 
// src a la cadena dst.
// Se anexa la cadena src a la cadena dst, 
// sobrescribiendo el carácter nulo
// al final de dst, y luego se anexa un 
// carácter nulo adicional.
// La cadena dst resultante está garantizada 
// para estar terminada en nulo.

size_t	ft_strlcat(char *restrict dst,
		const char *restrict	src, size_t	dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
