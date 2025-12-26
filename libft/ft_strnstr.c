/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:50:56 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 17:24:17 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*l;
	char	*b;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	if (l[i] == '\0')
		return (b);
	while (b[i] && i < len)
	{
		j = 0;
		while (l[j] == b[i + j] && (i + j) < len)
		{
			j++;
			if (l[j] == '\0')
				return (&b[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char	tab[] = "aaxx";
// 	char	tab2[] = "xx";
// 	char 	tabb[] = "aaxx";
// 	char	tabb2[] = "xx";

// 	printf("la fonction : %s\n", strnstr(tab, tab2, 5));
// 	printf("ma fonction : %s\n", ft_strnstr(tabb, tabb2, 5));
// }