/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:33:36 by musali            #+#    #+#             */
/*   Updated: 2022/10/07 19:57:40 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;
	char	*p;
	char	*q;

	p = (char *)haystack;
	q = (char *)needle;
	a = 0;
	if (q[0] == '\0')
		return (p);
	while (p[a] != '\0' && a < len)
	{
		b = 0;
		while (p[a + b] == q[b] && p[a + b] != '\0'
			&& (a + b) < len)
		{
			if (q[b + 1] == '\0')
				return (&p[a]);
			b++;
		}
		a++;
	}
	return (0);
}
