/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:41:04 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 11:35:39 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función putchar_fd() escribe el 
// carácter c en el archivo especificado por fd.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
