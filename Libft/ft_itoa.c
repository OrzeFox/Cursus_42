/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:34:36 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:02:30 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función itoa() convierte un entero en una cadena de caracteres.

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = get_num_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (n != 0)
	{
		str[--len] = '0' + (sign * (n % 10));
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
