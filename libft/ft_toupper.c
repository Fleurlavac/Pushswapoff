/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:35:49 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 13:53:30 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
// int main(int argc, char *argv[])
// {
// 	int i;
// 	if (argc == 2)
// 	{
// 		i = 0;
// 		printf("la fonction : ");
// 		while (argv[1][i])
// 		{
// 			printf("%c", toupper((int)argv[1][i]));
// 			i++;
// 		}
// 		printf("\nma fonction : ");
// 		i = 0;
// 		while (argv[1][i])
// 		{
// 			printf("%c", ft_toupper((int)argv[1][i]));
// 			i++;
// 		}
// 	}
// }
