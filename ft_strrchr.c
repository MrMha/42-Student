/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:36:43 by musali            #+#    #+#             */
/*   Updated: 2022/10/14 18:56:28 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = (ft_strlen(s) - 1);
	p = (char *)s;
	if (c == '\0')
		return (0);
	if (p[i] == c)
		return (&p[i]);
	while (p[i] != c && p[i] != '\0')
	{
		i--;
		if (p[i] == c)
			return (&p[i]);
	}
	return (0);
}
