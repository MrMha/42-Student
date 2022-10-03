/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:01:49 by musali            #+#    #+#             */
/*   Updated: 2022/10/02 20:44:19 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	uwu(int i, int sign, char *p, int sum)
{
	while (p[i])
	{
		if ((p[i] >= 9 && p[i] <= 13) || p[i] == ' ')
			i++;
		else if (p[i] == '-')
		{
			sign *= -1;
			if (!(p[i + 1] >= '0' && p[i + 1] <= '9'))
				return (0);
			i++;
		}
		else if (p[i] >= '0' && p[i] <= '9')
		{
			sum = sum * 10 + (p[i] - '0');
			if (!(p[i + 1] >= '0' && p[i + 1] <= '9'))
				return (sum * sign);
			i++;
		}
		else
			return (0);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	char	*p;
	int		sum;

	sum = 0;
	i = 0;
	sign = 1;
	p = (char *)str;
	sum = uwu(i, sign, p, sum);
	return (sum);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	char s[] = " -42a2ab";
// 	printf("%d\n%d", ft_atoi(s), atoi(s));
// }