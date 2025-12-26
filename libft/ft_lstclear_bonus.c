/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:48:45 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/04 15:33:07 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nxt;

	while (*lst && lst)
	{
		nxt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nxt;
	}
}
// int main(void)
// {
// 	char	*miaou = ft_strdup("u i i a");
// 	t_list *s = ft_lstnew(miaou);
// 	t_list *t = ft_lstnew(strdup("u i i a"));
// 	t_list *u = ft_lstnew(strdup("u i i a"));

// 	ft_lstadd_front(&s, t);
// 	ft_lstadd_front(&s, u);
// 	ft_lstclear(&u, del);
// }