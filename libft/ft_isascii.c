/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:50:00 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 13:52:10 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("ma fonction : %d\n", ft_isascii('a'));
// 	printf("la fonction : %d\n", isascii('a'));
// }
