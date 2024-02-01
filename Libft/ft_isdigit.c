/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:42:44 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:16:45 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función isdigit() comprueba si un
// carácter es un dígito decimal.
// Independientemente de la configuración 
// regional, esto incluye solo los siguientes caracteres:

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
// int main()
// {
//     if(isdigit(52))
//     printf("esta bien");
//     else
//     printf("no esta bien");
// }
