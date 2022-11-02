/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:41:12 by musali            #+#    #+#             */
/*   Updated: 2022/11/01 19:06:12 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ifset(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	countset(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (!(ifset(s1[i], set)))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		count;

	i = 0;
	count = (countset(s1, set));
	str = (char *)malloc(count + 1);
	i = 0;
	count = 0;
	while (s1[i])
	{
		if (!(ifset(s1[i], set)))
		{
			str[count] = s1[i];
			count++;
		}
		i++;
	}
	str[count] = '\0';
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char	*s1 = "Musotafa";
// 	char	*set = "o";

// 	printf("%s", ft_strtrim("   xxx   xxx", " x"));
// }
