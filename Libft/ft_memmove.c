/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:01:18 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:35:13 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función memmove() copia len bytes 
// de la cadena src a la cadena dst.
// Las dos cadenas pueden solaparse; 
// la copia se realiza de forma no destructiva.

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i < len)
	{
		if (src < dst)
			d[len - i - 1] = s[len - i - 1];
		else
			d[i] = s[i];
		i++;
	}
	return (dst);
}
// int main()
// {
//     char src[] = "Hello, World!";
//     char dst[20];

//     // Copiar src a dst usando ft_memmove
//     ft_memmove(dst + 5, src, 20);

//     // Imprimir el resultado
//     printf("dst: %s\n", dst);

//     return 0;
// }
