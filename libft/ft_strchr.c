/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:42:09 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 17:46:52 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != (char)c && ptr[i])
		i++;
	if (ptr[i] == (char)c)
		return (&ptr[i]);
	return (NULL);
}
// int main(void)
// {
// 	char s[] = "teste";
// 	char se[] = "teste";
// 	printf("La fonction : %s", strchr(s, 't' + 256));
// 	printf("\nMa fonction : %s", ft_strchr(se, 't' + 256));
// }