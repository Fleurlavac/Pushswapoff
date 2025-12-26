/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:14:51 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 17:47:17 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
// int main(void)
// {
// 	char s[] = "iiiiiiiiifregiirg";
// 	char se[] = "iiiiiiiiiergriigg";
// 	printf("La fonction : %s", strrchr(s, 'i'));
// 	printf("\nMa fonction : %s", ft_strrchr(se, 'i'));
// }