/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:43:22 by musali            #+#    #+#             */
/*   Updated: 2022/10/02 20:46:13 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*r;

	i = 0;
	s = (char *)dst;
	r = (char *)src;
	while (i < len)
	{
		s[i] = r[i];
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char p[] = "M7madei Hisham Ali";
// 	char d[] = "Mustafa Ali";

// 	memmove(p, d, 11);
// 	printf("%s", p);
// }