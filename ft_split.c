/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:01:54 by musali            #+#    #+#             */
/*   Updated: 2022/11/02 20:29:23 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	i = 0;
	j = count + 2;
	str = malloc(j);
	while (i < j - 1)
	{
		count = 0;
		while (s[k] != c && s[k])
			k++;
		str[i] = ft_substr(s, count, k);
		printf("%s\n", str[i]);
		count = k + 1;
		i++;
		k++;
	}
	str[i][0] = '\0';
	return (str);
}

int main()
{
	char *s = "Mustafa7Hisham7Ali";
	char c = '7';
	int i = 0;
	char **str = ft_split(s,c);
	while (i < 3)
	{
		printf("%s\n", str[i]);
		i++;
	}
}