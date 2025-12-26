/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:07:33 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/28 11:27:56 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include <strings.h>
#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_dst;
	size_t	l_src;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	i = 0;
	if (l_dst == 0)
		return (ft_strlcpy(dst, src, size));
	if (size == 0)
		return (l_src);
	if (l_dst < size)
	{
		while ((l_dst + i) < (size - 1) && src[i])
		{
			dst[l_dst + i] = src[i];
			i++;
		}
		dst[l_dst + i] = '\0';
		return (l_dst + l_src);
	}
	if (l_src == 0)
		return (size);
	return (l_src + size);
}
// int main(void)
// {
// 	size_t size = 5;

// 	char dest[] = "";
// 	char src[] = "HAAAA";
// 	printf("taille : %zu, Mienne : %s\n", ft_strlcat(dest, src, size), dest);

// 	char dest2[] = "";
// 	char src2[] = "HAAAA";
// 	// printf("%s\n",src2); OK
// 	printf("taille : %zu, Base   : %s\n",    strlcat(dest2, src2, size), dest2);
// }