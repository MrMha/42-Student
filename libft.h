/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:42:25 by musali            #+#    #+#             */
/*   Updated: 2022/10/03 17:22:28 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);

void	bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

int		ft_isalnum(int c);

int		ft_isalpha(unsigned char c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	*ft_memchr(const void *c, int c, size_t n);

int		memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *restrict dst, const void *restrict src, int n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *src);

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize);

size_t	ft_strlcpy(char *restrict dest, char *restrict src, size_t dstsize);

size_t	ft_strlen(const char *s);

int		ft_strncmp(char *s1, char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strchr(const char *s, int c);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif