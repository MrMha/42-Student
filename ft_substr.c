/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:16:50 by musali            #+#    #+#             */
/*   Updated: 2022/10/30 21:13:47 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	int				ln;
	size_t			i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	ln = ft_strlen(s) - start;
	d = (char *)malloc((sizeof(char) * ln) + 1);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		d[i] = s[start];
		start++;
		i++;
	}
	d[i] = '\0';
	return (d);
}
