/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:31:53 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 13:51:18 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("la mienne : %ld\n", ft_strlen(""));
// 	printf("l'autre : %ld", strlen(""));
// }