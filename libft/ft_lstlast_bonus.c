/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:01:21 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/05 11:08:28 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next != NULL)
		lst = lst -> next;
	return (lst);
}
// int main(void)
// {
// 	t_list *s = ft_lstnew("everything");
// 	t_list *s1 = ft_lstnew("is");
// 	t_list *s2 = ft_lstnew("okay");

// 	s -> next = s1;
// 	s1 -> next = s2;

// 	printf("toudoubem : %s", (char *)ft_lstlast(s)->content);
// }