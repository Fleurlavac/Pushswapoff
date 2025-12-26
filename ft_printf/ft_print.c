/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:04:07 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/14 12:01:54 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *arg, ...)
{
	va_list	params_ptr;
	int		i;
	int		len;

	va_start(params_ptr, arg);
	i = 0;
	len = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] == '%')
		{
			i++;
			len += ft_conversions(params_ptr, arg[i], len);
		}
		else
			len += for_char(arg[i]);
		i++;
	}
	va_end(params_ptr);
	return (len);
}
// int main(void)
// {
// 	char	*pointer = NULL;
// 	int	size = 0;
// 	int	size2 = 0;

// 	printf("\n\n************ c parti ************\n\n");
// 	ft_printf("\n------------ c ------------\n\n");
// 	size = ft_printf("\n\n            %c            \n\n", 'a');
// 	ft_printf(" %%c =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %c            \n\n", 'a');
// 	ft_printf(" %%c =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ s ------------\n\n");
// 	size = ft_printf("\n\n            %s            \n\n", pointer);
// 	ft_printf(" %%s =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %s            \n\n", pointer);
// 	ft_printf(" %%s =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ p ------------\n\n");
// 	size = ft_printf("\n\n            %p            \n\n", NULL);
// 	ft_printf(" %%p =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %p            \n\n", NULL);
// 	ft_printf(" %%p =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ d ------------\n\n");
// 	size = ft_printf("\n\n            %d            \n\n", -1);
// 	ft_printf(" %%d =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %d            \n\n", -1);
// 	printf(" %%d =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ i ------------\n\n");
// 	size = ft_printf("\n\n            %i            \n\n", 42);
// 	ft_printf(" %%i =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %d            \n\n", 42);
// 	ft_printf(" %%i =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ u ------------\n\n");
// 	size = ft_printf("\n\n            %u            \n\n", 42);
// 	ft_printf(" %%u =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %d            \n\n", 42);
// 	ft_printf(" %%u =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ x ------------\n\n");
// 	size = ft_printf("\n\n            %x            \n\n", 42);
// 	ft_printf(" %%x =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %x            \n\n", 42);
// 	ft_printf(" %%x =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ X ------------\n\n");
// 	size = ft_printf("\n\n            %X            \n\n", 42);
// 	ft_printf(" %%X =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %X            \n\n", 42);
// 	ft_printf(" %%X =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ % ------------\n\n");
// 	size = ft_printf("\n\n            %%            \n\n");
// 	ft_printf(" %% =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %%            \n\n");
// 	ft_printf(" %% =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf("\n------------ TEST ------------\n\n");
// 	size = ft_printf("\n\n            %s            \n\n", pointer);
// 	ft_printf(" Test =  %d  : mon printf\n", size);
// 	size2 = printf("\n\n            %s            \n\n", pointer);
// 	ft_printf(" Test =  %d  : printf\n", size2);
// 	(size == size2) ? printf("\n\t\033[32;01m✅​ OK 🫡​\033[00m\n") :
// 		 printf("\033[31;01m\t❌​ KO 😩\033[00m\n");

// 	ft_printf(" Test =  %p  : printf\n", NULL);
// }
