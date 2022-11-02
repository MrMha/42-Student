/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:43:22 by musali            #+#    #+#             */
/*   Updated: 2022/10/28 21:09:21 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!d && !s)
		return (NULL);
	else if (d < s)
		ft_memcpy(dst, src, len);
	else
	{
		while (i < len)
		{
			d[len] = s[len];
			len--;
		}
	}
	return (d);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	//char p[] = "M7madei Hisham Ali";
// //	char d[] = "Mustafa Ali";
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	//ft_memmove(sResult + 1, sResult, 2);
// 	printf("%s\n%s\n", sResult, ft_memmove(sResult + 1, sResult, 2));
// 	printf("%s", memmove(sResult + 1, sResult, 2));
// }cd ..
