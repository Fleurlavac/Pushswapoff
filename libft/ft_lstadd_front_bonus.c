/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:03:04 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/03 11:22:15 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {
// 	t_list *s = ft_lstnew("souffrance ultime");
// 	t_list *s2 = ft_lstnew("medicament");
// 	ft_lstadd_front(&s, s2); 
// 	printf("-> %s", (char*)s2->content);
// 	printf("\n-> %s", (char*)s2->next->content);
// }