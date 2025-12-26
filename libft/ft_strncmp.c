/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:14:10 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/22 10:16:49 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && (unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char s1[] = "abcdef";
// 	char s2[] = "abc\375xx";
// 	char ss1[] = "abcdef";
// 	char ss2[] = "abc\375xx";
// 	printf("la mienne, %d\n", ft_strncmp(s1, s2, 5));
// 	printf("la fonction %d\n", strncmp(ss1, ss2, 5));
// }