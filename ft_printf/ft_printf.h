/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:05:27 by fcaval            #+#    #+#             */
/*   Updated: 2025/12/26 12:01:31 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "../libft/libft.h"

int	ft_printf(const char *arg, ...);
int	for_char(int c);
int	for_str(char *str);
int	ft_conversions(va_list params_ptr, char c, int len);
int	for_putnbr(long n);
int	for_putnbr_unsigned(unsigned int n);
int	for_hexa_low(unsigned long n);
int	for_hexa_upp(unsigned long n);
int	for_ptr(unsigned long n);

#endif