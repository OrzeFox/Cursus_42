/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:14:03 by dcruz             #+#    #+#             */
/*   Updated: 2024/02/01 12:22:11 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función count_words cuenta la cantidad 
// de palabras en la cadena 's' que
// están separadas por el carácter 'c'.
// Devuelve el número de palabras contadas.

int	count_words(const char *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (w)
			{
				i++;
				w = 0;
			}
		}
		else
		{
			w = 1;
		}
		s++;
	}
	if (w)
		i++;
	return (i);
}

// La función extract_word extrae una palabra
// de la cadena 's' comenzando desde la
// posición indicada por el puntero 'index' 
// y utilizando el carácter 'c' como delimitador.
// Devuelve la palabra extraída como una cadena dinámica recién asignada.

char	*extract_word(const char *s, char c, int *index)
{
	int		start;
	int		len;
	char	*w;
	int		i;

	start = *index;
	while (s[*index] && s[*index] != c)
	{
		(*index)++;
	}
	len = *index - start;
	w = (char *)malloc(sizeof(char) * (len + 1));
	if (!w)
		return (NULL);
	i = 0;
	while (start < *index)
	{
		w[i++] = s[start++];
	}
	w[len] = '\0';
	return (w);
}

// La función free_split libera la memoria
// asignada a un array de cadenas 'str'.

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

// La función ft_split divide la cadena 's' 
// en palabras utilizando el carácter 'c' como
// delimitador y devuelve un array de cadenas con las palabras resultantes. 
// El último elemento del array es NULL.

char	**ft_split(char const *s, char c)
{
	int			i;
	char		**str;
	int			j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			str[j] = extract_word(s, c, &i);
			if (!str[j] && (free_split(str), 1))
				return (NULL);
			j++;
		}
	}
	str[j] = (NULL);
	return (str);
}

// int	main(void)
// {
// 	char	**str;
// 	int		i;

// 	i = 0;
// 	str = ft_split("Hola que tal estas", ' ');
// 	while (str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// 	return (0);
// }