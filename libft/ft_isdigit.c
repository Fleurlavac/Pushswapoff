/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:35:40 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/21 13:52:18 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("ma fonction : %d\n", ft_isdigit('a'));
// 	printf("la fonction : %d\n", isdigit('a'));
// }
