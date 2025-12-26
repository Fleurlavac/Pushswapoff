/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:04:36 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 18:31:03 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buffer;

	i = 0;
	if (!*s)
		return (ft_strdup(""));
	buffer = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
// char	ft_miam(unsigned int i, char c)
// {
// 	i = -1;

// 	if (c >= 'a' && c <= 'z')
// 		return (c + i);
// 	return (c);
// }
// int main(void)
// {
// 	char	s[] = "qjfssf gfvjmmf djtfbv";
// 	char	*fonction = ft_strmapi(s, ft_miam);
// 	printf("1 2 3 : %s", fonction);
// 	free(fonction);
// }