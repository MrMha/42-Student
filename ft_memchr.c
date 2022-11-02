/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:46:06 by musali            #+#    #+#             */
/*   Updated: 2022/10/07 19:59:13 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;
	char	*p;

	p = (char *)s;
	a = 0;
	while (a < n)
	{
		a++;
		if (p[a] == c)
		{
			return (&p[a]);
		}
	}
	return (0);
}
