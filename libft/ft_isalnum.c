/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:43:32 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 13:51:58 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (8);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("ma fonction : %d\n", ft_isalnum('='));
// 	printf("la fonction : %d\n", isalnum('='));
// }
