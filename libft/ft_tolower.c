/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:23:46 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 13:53:24 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
// int	main(int argc, char *argv[])
// {
// 	int	i;
// 	if (argc == 2)
// 	{
// 		i = 0;
// 		printf("La fonction : ");
// 		while (argv[1][i])
// 		{
// 			printf("%c", tolower((int)argv[1][i]));
// 			i++;
// 		}
// 		i = 0;
// 		printf("\nMa fonction : ");
// 		while (argv[1][i])
// 		{
// 			printf("%c", ft_tolower((int)argv[1][i]));
// 			i++;
// 		}
// 	}
// }