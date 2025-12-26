/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:13:21 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/03 13:51:08 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (count);
	while (lst != NULL)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}
// int main(void)
// {
// 	t_list	*s = ft_lstnew("la vie la vie la vie la vie");
// 	t_list	*s1 = ft_lstnew("voici la vie");
// 	t_list	*s2 = ft_lstnew("la belle vie qui coule");
// 	t_list	*s3 = ft_lstnew("dans nos veines");

// 	s->next = s1;
// 	s1->next = s2;
// 	s2->next = s3;

// 	printf("nombre de noeuds : %d", ft_lstsize(s));
// }