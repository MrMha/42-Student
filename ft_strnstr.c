/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:33:36 by musali            #+#    #+#             */
/*   Updated: 2022/10/02 20:43:12 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	a;
	int	b;

	a = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[a] != '\0' && a < len)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && haystack[a + b] != '\0'
			&& (a + b) < len)
		{
			if (needle[b + 1] == '\0')
				return (&haystack[a]);
			b++;
		}
		a++;
	}
	return (0);
}
