/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:10:48 by musali            #+#    #+#             */
/*   Updated: 2022/10/14 18:41:15 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t dstsize)
{
	size_t	ch;

	ch = 0;
	while (src[ch] && dstsize > ch + 1)
	{
		dest[ch] = src[ch];
		ch++;
	}
	dest[ch] = 0;
	while (src[ch])
		ch++;
	return (ch);
}
