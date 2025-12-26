/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:41:15 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/05 11:17:37 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)-> next = new;
	else
		*lst = new;
}
// int main(void)
// {
// 	t_list *s = ft_lstnew("alooooors");
// 	t_list *s2 = ft_lstnew("euuuuuuuh");
// 	ft_lstadd_back(&s, s2);
// 	printf("\n-> %s", (char*)s->next->content);
// 	printf("-> %s", (char*)s2->next);
// }