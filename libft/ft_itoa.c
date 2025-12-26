/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:24:47 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 10:56:21 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	int			i;

	nbr = n;
	str = malloc(sizeof(char) * ft_count(n) + 1);
	i = ft_count(n) - 1;
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	str[ft_count(n)] = '\0';
	return (str);
}

// int main(void)
// {
// 	// int	
// 	char *str = ft_itoa(0);
// 	printf("%s", str);
// 	free (str);
// }