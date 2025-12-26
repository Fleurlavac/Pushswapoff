/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:06:58 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 13:52:23 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("ma fonction : %d\n", ft_isprint(2));
// 	printf("la fonction : %d\n", isprint(2));
// }
