/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:01:54 by musali            #+#    #+#             */
/*   Updated: 2022/11/03 17:39:38 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*fsubstr(char const *s, unsigned int start, size_t len, char c)
{
	char			*d;
	int				ln;
	size_t			i;

	ln = 0;
	i = start;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (s[i] && s[i] != c)
	{
		ln++;
		i++;
	}
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

/*char	**strdom(int i, int j, char **str, char c)
{
	int	tmp;
	int	tmp2
	int	k;

	tmp = 0;
	tmp2 = 0;
	k = 0;
	while (i < j)
	{
		while (s[k] != c && s[k])
			k++;
		tmp2 = k - tmp;
		str[i] = fsubstr(s, tmp, tmp2, c);
		tmp = k + 1;
		i++;
		k++;
	}
}*/

int	cnt(int i, char c, int count, char const *s)
{
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	int				i;
	int				j;
	size_t			k;

	i = 0;
	k = 0;
	j = 0;
	while (*s == c)
		s++;
	// if (s[0] == '\0')
	// {
	// 	str = NULL;
	// 	return (str);
	// }
	j = (cnt(i, c, j, s));
	// if (j == 0)
	// 	return (0);
	j = j + 1;
	str = malloc(j * sizeof(char *));
	while (i++ < j)
	{
		while (*s == c)
			s++;
		while (s[k] != c && s[k])
			k++;
		str[i - 1] = fsubstr(s, 0, k, c);
		while (s[0] != c && *s)
			s++;
		k = 0;
	}
	return (str);
}

// int main()
// {
// 	char *s = "77Mustafa777777Hisham7777Ali77777";
// 	char c = '7';
// 	int i = 0;
// 	char **str = ft_split(s,c);
// 	while (i < 3)
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// }