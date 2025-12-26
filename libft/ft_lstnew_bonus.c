/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:47:43 by fcaval            #+#    #+#             */
/*   Updated: 2025/11/03 11:09:59 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}
// int main(void)
// {
// 	t_list	*buffer;
// 	char s[] = "happy happy happy";
// 	buffer = ft_lstnew(s);
// 	printf("-> %s", (char *)buffer->content);
// 	free(buffer);
// }