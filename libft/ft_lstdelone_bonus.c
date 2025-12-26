/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:07:33 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/04 15:02:19 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_delete(void *content)
// {
// 	free(content);
// }
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
// int main(void)
// {
// 	t_list *s = ft_lstnew(ft_strdup("u i i a"));
// 	ft_lstdelone(s, ft_delete);
// }