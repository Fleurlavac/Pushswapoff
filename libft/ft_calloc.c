/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:27:51 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/05 15:02:00 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// int main(void)
// {
// 	size_t count = 10;
// 	size_t size = sizeof(int);
// 	int *ptr = ft_calloc(count, size);
// 	int *ptr2 = calloc(count, size);

// 	size_t	i;
// 	i = 0;
// 	printf("\nma fonction : ");
// 	while (i < count)
// 	{
// 		printf("%d, ", ptr[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\nla fonction : ");
// 	while (i < count)
// 	{
// 		printf("%d, ", ptr2[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(ptr);
// 	free(ptr2);
// }