/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:49:30 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/05 15:01:55 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}
// int	main(void)
// {
// 	int	str[] = {10, 20, 30, 40};
// 	int	str2[] = {10, 20, 30, 40};
// 	size_t size = sizeof(int)*(1);
// 	int	i;
// 	i = 0;
// 	bzero(str, size);
// 	printf("la fonction : ");
// 	while (i < 4)
// 	{
// 		printf("%d; ", str[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	ft_bzero(str2, size);
// 	i = 0;
// 	printf("ma fonction : ");
// 	while (i < 4)
// 	{
// 		printf("%d; ", str2[i]);
// 		i++;
// 	}
// 	printf("\n");
// }