/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:05:00 by fcaval            #+#    #+#             */
/*   Updated: 2025/12/23 13:52:25 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((ptr[i] == ' ') || (ptr[i] >= 9 && ptr[i] <= 13))
		i++;
	if ((ptr[i] == '-') || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		result = (result * 10) + (ptr[i] - '0');
		i++;
	}
	return (result * sign);
}
// int main(void)
// {
// 	char str[] = "  -0012a42";
// 	printf("ma fonction defou : %d \n", ft_atoi(str));
// 	printf("la fonction defou : %d \n", atoi(str));
// }