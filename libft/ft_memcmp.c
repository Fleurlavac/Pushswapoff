/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:13:13 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 17:37:41 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

int	ft_memcmp(const void *ptr, const void *ptr2, size_t size)
{
	size_t			i;
	unsigned char	*ptrr;
	unsigned char	*ptrr2;

	ptrr = (unsigned char *)ptr;
	ptrr2 = (unsigned char *)ptr2;
	i = 0;
	while (i < size)
	{
		if ((ptrr[i] - ptrr2[i] != 0) && i < size)
			return (ptrr[i] - ptrr2[i]);
		i++;
	}
	return (0);
}
// int	main(int argc, char *argv[])
// {
// 	if (argc == 4)
// 	{
// 		printf("la fonction : %d", memcmp(argv[1], argv[2], atoi(argv[3])));
// 		printf("\n");
// 		printf("ma fonction : %d", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
// 		printf("\n");
// 	}
// }