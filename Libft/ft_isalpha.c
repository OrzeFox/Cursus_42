/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:29:04 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:16:08 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función isalpha() comprueba si un carácter 
// cumple con la condición de ser mayúscula 
// (isupper(3)) o minúscula (islower(3)).
// El valor del argumento debe ser representable 
// como un unsigned char o el valor de EOF.

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// int main()
// {
//     if(isalpha(68))
//     printf("esta bien");
//     else
//     printf("no esta bien");
// }
