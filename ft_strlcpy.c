/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:10:48 by musali            #+#    #+#             */
/*   Updated: 2022/10/02 20:43:01 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, char *restrict src, size_t dstsize)
{
	unsigned int	ch;

	ch = 0;
	while (src[ch] && size > ch + 1)
	{
		dest[ch] = src[ch];
		ch++;
	}
	dest[ch] = 0;
	while (src[ch])
		ch++;
	return (ch);
}
