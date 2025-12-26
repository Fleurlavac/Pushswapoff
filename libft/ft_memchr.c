/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:41:57 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 17:30:45 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *m, int c, size_t size)
{
	unsigned char	*mr;
	size_t			i;

	mr = (unsigned char *) m;
	i = 0;
	while (i < size)
	{
		if (mr[i] == (unsigned char)c)
			return (&mr[i]);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char tab[] = "bwe could be debile";
// 	char tab2[] = "bwe could be debile";
// 	int	c = 'd';
// 	size_t size = 7;

// 	printf("ma fonction : %s\n", (char *)ft_memchr(tab, c, size));
// 	printf("la fonction : %s\n", (char *)memchr(tab2, c, size));
// }