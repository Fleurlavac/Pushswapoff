/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:33:53 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/04 17:03:08 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst ->content);
		lst = lst->next;
	}
}
// void	a(void	*content)
// {
// 	char	*b;
// 	int		i;

// 	i = 0;
// 	b = (char *)content;
// 	while (b[i])
// 	{
// 		b[i] = 'a';
// 		i++;
// 	}
// }
// void	del(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list *s = ft_lstnew(strdup("u i i a"));
// 	t_list *t = ft_lstnew(strdup("u i i a"));
// 	t_list *u = ft_lstnew(strdup("u i i a"));

// 	s -> next = t;
// 	t -> next = u;
// 	printf("-> %s", (char*)s->content);
// 	printf("\n-> %s", (char*)t->content);
// 	printf("\n-> %s", (char*)u->content);
// 	ft_lstiter(s, a);
// 	printf("\n-> %s", (char*)s->content);
// 	printf("\n-> %s", (char*)t->content);
// 	printf("\n-> %s", (char*)u->content);
// 	ft_lstclear(&s, del);
// }
