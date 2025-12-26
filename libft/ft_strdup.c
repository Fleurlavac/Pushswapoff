/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:52:50 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 16:13:55 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!(ptr))
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int main(void)
// {
// 	char src[] = "Copie cela stp :)";
// 	char	*copy;

// 	copy = ft_strdup(src);
// 	printf("je dois faire quoi ? %s\n", copy);
// 	free(copy);
// }