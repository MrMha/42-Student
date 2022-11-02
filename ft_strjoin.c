/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:45:30 by musali            #+#    #+#             */
/*   Updated: 2022/11/02 19:09:28 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = ft_strlen(s1) + ft_strlen(s2);
	j = 0;
	k = 0;
	str = malloc(i + 1);
	while (s1[j])
	{
		str[j + k] = s1[j];
		j++;
	}
	while (s2[k])
	{
		str[j + k] = s2[k];
		k++;
	}
	str[j + k] = '\0';
	return (str);
}

// int main()
// {
// 	char	*s1 = NULL;
// 	char	*s2 = NULL;

// 	printf("%s", ft_strjoin(s1, s2));
// }