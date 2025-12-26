/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:08:23 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 13:52:36 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*destt;
	unsigned char			*srcc;

	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 0;
	if (!destt && !srcc)
		return (NULL);
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}
// int main(void)
// {
// 	char tab[] = " ";
// 	char tab2[] = "test";
// 	char tabb[] = " ";
// 	char tabb2[] = "test";

// 	printf("la fonction : %s", (char *)memcpy(tab, tab2, 2));
// 	printf("\nma fonction : %s", (char *)ft_memcpy(tabb, tabb2, 2));

// 	int	re[] = {10, 20, 30, 40};
// 	int re2[] = {50, 60, 70, 80};
// 	int ree[] = {10, 20, 30, 40};
// 	int ree2[] = {50, 60, 70, 80};
// 	int i = 0;
// 	size_t m = sizeof(int)*3;

// 	memcpy(re, re2, m);
// 	printf("\nla fonction : ");
// 	while (i < 4)
// 	{
// 		printf("%d, ", re[i]);
// 		i++;
// 	}
// 	i = 0;
// 	ft_memcpy(ree, ree2, m);
// 	printf("\nma fonction : ");
// 	while (i < 4)
// 	{
// 		printf("%d, ", ree[i]);
// 		i++;
// 	}
// }