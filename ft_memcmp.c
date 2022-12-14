/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:56:26 by musali            #+#    #+#             */
/*   Updated: 2022/10/07 19:36:10 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	i = 0;
	p = (char *)s1;
	q = (char *)s2;
	while (i < n && p[i] != q[i] && (q[i] || p[i]))
		i++;
	return ((p[i] - q[i]));
}
