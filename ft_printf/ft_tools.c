/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:13:55 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/14 12:00:28 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	for_char(int c)
{
	return (write(1, &c, 1));
}

int	for_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write (1, "(null)", 6));
	while (str[i])
	{
		for_char(str[i]);
		i++;
	}
	return (i);
}

int	ft_conversions(va_list params_ptr, char c, int len)
{
	if (c == 'c')
		len = for_char(va_arg(params_ptr, int));
	else if (c == 's')
		len = for_str(va_arg(params_ptr, char *));
	else if (c == 'p')
		len = for_ptr(va_arg(params_ptr, unsigned long));
	else if (c == 'd' || c == 'i')
		len = for_putnbr(va_arg(params_ptr, int));
	else if (c == 'u')
		len = for_putnbr_unsigned(va_arg(params_ptr, unsigned int));
	else if (c == 'x')
		len = for_hexa_low(va_arg(params_ptr, unsigned int));
	else if (c == 'X')
		len = for_hexa_upp(va_arg(params_ptr, unsigned int));
	else if (c == '%')
		len = for_char('%');
	return (len);
}
