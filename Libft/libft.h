/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:45:06 by dcruz             #+#    #+#             */
/*   Updated: 2024/01/15 15:13:45 by dcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
#include <stddef.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int 	ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp (const void *s1, const void *s2, size_t n);
void	*ft_memcpy (void *dest, const void *src, size_t n);
void	*ft_memmove (void *dest, const void *src, size_t n);
void	*ft_memset (void *s, int c, size_t n);
char	*ft_strchr (const char *s, int c);
char	*ft_strdup (const char *s1);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr (const char *haystack, const char *needle, size_t len);
char	*ft_strrchr (const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif