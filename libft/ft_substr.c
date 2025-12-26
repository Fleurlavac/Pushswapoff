/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:01:59 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/07 10:41:32 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*buffer;
	size_t			j;

	i = 0;
	if (s[i] == '\0' || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	buffer = malloc(sizeof(char) * (len + 1));
	if (!(buffer))
		return (NULL);
	i = (size_t)start;
	j = 0;
	while (j < len && i != (ft_strlen(s)))
	{
		buffer[j] = s[i];
		i++;
		j++;
	}
	buffer[j] = '\0';
	return (buffer);
}
// int main(void)
// {
// 	char	*la;
// 	char s[] = "FLIP FLAP FOUBALOUP BALAP";
// 	unsigned int start = 10;
// 	size_t len = 20;
// 	la = ft_substr(s, start, len);

// 	printf("magie : %s\n", la);
// 	free(la);
// }