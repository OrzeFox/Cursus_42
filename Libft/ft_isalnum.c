/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:41:41 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/09 15:19:29 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
    return (1);
    else
    return (0);
}