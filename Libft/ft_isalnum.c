/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:41:41 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:15:49 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función isalnum() comprueba si un carácter cumple 
// con la condición de ser alfabético 
// (isalpha(3)) o numérico (isdigit(3)).
// El valor del argumento debe ser representable 
// como un unsigned char o el valor de EOF.

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
