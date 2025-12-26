/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:36:09 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/07 10:37:53 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*rsrc;

	dst = (unsigned char *)dest;
	rsrc = (unsigned char *)src;
	i = 0;
	if (!rsrc && !dst)
		return (NULL);
	if (rsrc < dst)
	{
		while (size > 0)
		{
			dst[size - 1] = rsrc[size - 1];
			size--;
		}
		return (dest);
	}
	while (i < size)
	{
		dst[i] = rsrc[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	char	dest[100] = "lorem ipsum dolor sit amet";
// 	char	src[100] = "consectetur";

// 	char	dest1[100] = "lorem ipsum dolor sit amet";
// 	char	src1[] = "consectetur";

// 	char	dest2[100] = "lorem ipsum dolor sit amet";
// 	char	src2[] = "consectetur";

// 	printf("\n\t\tVRAIE FONCTION\n\n");
// 	memmove(dest, src, 5);
// 	printf("la fonction : %s\n", dest);

// 	printf("\n\t\tMA FONCTION\n\n");
// 	ft_memmove(dest1, src1, 5);
// 	printf("ma fonction : %s\n", dest);

// 	printf("\n\t\tTest de memcpy\n\n");

// 	printf("memcpy : %s\n", (char *)memcpy(dest2, src2, 5));
// }