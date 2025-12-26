/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:26:32 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 12:17:55 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void	ft_levide(unsigned int i, char *s)
// {
// 	if (*s >= 'a' && *s <= 'z')
// 		*s -= 32;
// }
// int main(void)
// {
// 	char s[] = "donne moi mon donut sucre au sucre";
// 	ft_striteri(s, ft_levide);
// 	printf("marge : %s", s);
// }