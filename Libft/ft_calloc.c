/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:55:59 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:15:17 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función calloc() asigna memoria para un array de nmemb
// elementos de tamaño bytes cada uno y devuelve un puntero 
// a la memoria asignada. La memoria se inicializa a cero.
// Si nmemb o size es 0, 
// entonces calloc() devuelve NULL o un valor de puntero único 
// que más tarde se puede pasar con éxito a free().

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
