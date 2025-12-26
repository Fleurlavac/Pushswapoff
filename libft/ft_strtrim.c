/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:49:39 by fcaval            #+#    #+#             */
/*   Updated: 2025/10/30 18:25:55 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_test(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				break ;
			j++;
		}
		if (s1[i] != s2[j])
			return (i);
		i++;
	}
	return (i);
}

int	ft_test_fin(char *s1, char *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	while (i > 0)
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				break ;
			j++;
		}
		if (s1[i] != s2[j])
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*buffer;

	i = 0;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	start = ft_test((char *)s1, (char *)set);
	end = ft_test_fin((char *)s1, (char *)set);
	buffer = ft_substr(s1, start, end - start + 1);
	return (buffer);
}
// int main(void)
// {
// 	char s1[] = "";
// 	char s2[] = "gdryezhr";
// 	char *bjr;

// 	bjr = ft_strtrim(s1, s2);
// 	printf("stp fonctionne : %s\n", bjr);
// 	free(bjr);
// }