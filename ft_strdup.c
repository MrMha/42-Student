/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:28:40 by abalhamm          #+#    #+#             */
/*   Updated: 2022/10/02 20:43:34 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		x;
	int		s;
	char	*des;

	x = 0;
	s = 0;
	while (src[x] != '\0')
		x++;
	des = (char *)malloc((sizeof(char) * x) + 1);
	if (!des)
		return (0);
	while (src[s] != '\0')
	{
		des[s] = src[s];
		s++;
	}
	des[s] = '\0';
	return (des);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strdup("Abdullah"));
// }
