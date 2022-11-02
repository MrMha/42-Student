/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:30:42 by musali            #+#    #+#             */
/*   Updated: 2022/11/01 19:17:24 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	size2;

	if (size != 0 && count >= SIZE_MAX / size)
		return (NULL);
	size2 = count * size;
	dst = malloc(size2);
	if (!dst)
		return (0);
	ft_memset(dst, 0, size2);
	return (dst);
}