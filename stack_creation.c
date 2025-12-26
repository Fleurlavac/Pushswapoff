/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:47:01 by fcaval            #+#    #+#             */
/*   Updated: 2025/12/26 14:10:27 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add_back(t_stack **lst, t_stack *new)
{
	if (*lst)
		last_node(*lst)-> next = new;
	else
		*lst = new;

	// printf("Ajouté à la fin : %d\n", new->value);
}

t_stack	*last_node(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;

	// printf("Quel est le dernier noeud : %d\n", lst->value);

	return (lst);
}

t_stack	*create_node(int value)
{
	t_stack	*node;
	
	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node -> value = value;
	node -> index = -1;
	node -> next = NULL;

	// printf("création du noeud : %d\n", node->value);

	return (node);
}

t_stack	*prepare_stack(int argc, char **argv)
{
	int		i;
	t_stack	*a;

	a = NULL;
	i = 1;

	while (i < argc)
	{
		lst_add_back(&a, create_node(ft_atoi(argv[i])));
		i++;
	}
	return (a);
}
