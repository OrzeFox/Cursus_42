/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:14:09 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:14:01 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función bzero() escribe n bytes con valor cero en la cadena s.
// Si n es cero, bzero() no hace nada.

void	*ft_bzero(void *ptr, size_t n)
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = (char *)ptr;
	while (n > i)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
