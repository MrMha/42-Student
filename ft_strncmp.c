/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:17:33 by musali            #+#    #+#             */
/*   Updated: 2022/10/07 21:34:54 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	k;

	k = 0;
	while (k < n)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
		else if (s1[k] == '\0' && s2[k] == '\0')
			return (0);
		k++;
	}
	return (0);
}
