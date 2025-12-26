/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:40:17 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/07 10:40:21 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stddef.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	return (d);
}
// int	main(void)
// {
// 	char str[] = "pause gouter stp :(";
// 	char str2[] = "pause gouter stp :(";
// 	int c = '*';
// 	size_t n = 5;

// 	printf("la fonction : %s\n", (char *)memset(str, c, n));
// 	printf("ma fonction : %s\n", (char *)ft_memset(str2, c, n));

// 	int	test[] = {10, 20, 30, 40};
// 	int test2[] = {10, 20, 30, 40};
// 	int i = 0;
// 	size_t b = sizeof(int)*(1);
// 	memset(test, c, b);
// 	printf("\nla fonction : ");
// 	while (i < 4)
// 	{
// 		printf("%d, ", test[i]);
// 		i++;
// 	}
// 	i = 0;
// 	ft_memset(test2, c, b);
// 	printf("\nma fonction : ");
// 	while (i < 4)
// 	{
// 		printf("%d, ", test2[i]);
// 		i++;
// 	}
// }
