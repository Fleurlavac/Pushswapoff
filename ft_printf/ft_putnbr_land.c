/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_land.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:56:57 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/14 12:01:05 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	for_putnbr(long n)
{
	long int	len;

	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		len += for_putnbr(n / 10);
		len += for_putnbr(n % 10);
	}
	else
		len += for_char(n + 48);
	return (len);
}

int	for_putnbr_unsigned(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n > 9)
	{
		len += for_putnbr_unsigned(n / 10);
		len += for_putnbr_unsigned(n % 10);
	}
	else
		len += for_char(n + 48);
	return (len);
}

int	for_hexa_low(unsigned long n)
{
	unsigned int	len;
	char			*base;

	len = 0;
	base = "0123456789abcdef";
	if (n > 15)
	{
		len += for_hexa_low(n / 16);
		len += for_hexa_low(n % 16);
	}
	else
		len += write(1, &base[n], 1);
	return (len);
}

int	for_hexa_upp(unsigned long n)
{
	unsigned int	len;
	char			*base;

	len = 0;
	base = "0123456789ABCDEF";
	if (n > 15)
	{
		len += for_hexa_upp(n / 16);
		len += for_hexa_upp(n % 16);
	}
	else
		len += write(1, &base[n], 1);
	return (len);
}

int	for_ptr(unsigned long n)
{
	char			*base;
	unsigned int	len;

	len = 0;
	base = "0123456789abcdef";
	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (len += 5);
	}
	len += write(1, "0x", 2);
	if (n > 15)
	{
		len += for_hexa_low(n);
	}
	else
		len += write(1, &base[n], 1);
	return (len);
}
