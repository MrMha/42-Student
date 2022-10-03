/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:26:06 by musali            #+#    #+#             */
/*   Updated: 2022/10/02 20:45:41 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	size_t	i;
	char	*s;
	char	*r;

	i = 0;
	s = (char *)dst;
	r = (char *)src;
	while (i < n)
	{
		s[i] = r[i];
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
//
// int main()
// {
// 	char p[50] = "M7madei Hisham Ali";
// 	char d[50] = "Mustafa Ali";

// 	ft_memcpy(p, d, 11);
// 	printf("%s", p);
// }