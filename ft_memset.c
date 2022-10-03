/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musali <musali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:10:45 by musali            #+#    #+#             */
/*   Updated: 2022/10/02 20:46:19 by musali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)b;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// 
// int main()
// {
// 	char p[] = "Mustafa Hisham Ali";
// 
// 	ft_memset(p, '$', 7);
// 	printf("%s", p);
// }