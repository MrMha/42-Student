/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:46:06 by musali            #+#    #+#             */
/*   Updated: 2022/10/02 20:43:51 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *c, int c, size_t n)
{
	int		a;
	int		b;
	char	*p;

	p = (char *)c;
	a = 0;
	while (p[i] != c && p[i])
	{
		i++;
		if (p[i] == c)
		{
			return (&p[i]);
		}
	}
	return (0);
}
