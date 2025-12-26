/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:46:23 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/28 11:28:45 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen((char *)src);
	if (!size)
		return (lenght);
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lenght);
}
// int main(void)
// {
// 	char	dst[] = "colle";
// 	char	src[] = "copie";
// 	char	dst2[] = "colle";
// 	char	src2[] = "copie";

// 	printf("\n\t\tVRAIE FONCTION\n\n");
// 	printf("Taille : %zu. Chaine : %s\n", strlcpy(dst, src, 10), dst);

// 	printf("\n\t\tMA FONCTION\n\n");
// 	printf("Taille : %zu. Chaine : %s\n", ft_strlcpy(dst2, src2, 10), dst2);
// }