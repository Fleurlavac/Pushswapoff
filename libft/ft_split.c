/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:31:07 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/05 14:58:15 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	size_word(char const *s, char c, int i)
{
	int	j;

	j = i;
	while (s[j] != c && s[j])
		j++;
	return (j - i);
}

static char	**ft_free(char **s1, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(s1[i]);
		s1++;
	}
	free(s1);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * ((word_count(s, c)) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = size_word(s, c, i);
		tab[j] = ft_substr(s, i, len);
		if (!(tab[j]))
			return (ft_free(tab, j));
		i += len;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

// int main(void)
// {
// 	char s[] = "   lorem   ipsum dolor     sit amet, consectetur
//    adipiscing elit. Sed non risus. Suspendisse   ";
// 	char c = ' ';
// 	char	**tab;
// 	int		i;

// 	tab = ft_split(s, c);
// 	i = 0;
// 	if (!tab)
// 		return (0);
// 	while (tab[i])
// 	{
// 		printf("SAVE MY SOUL : %s\n", tab[i]);
// 		free(tab[i]);
// 		i++;
// 	}
// 	free(tab);
// }