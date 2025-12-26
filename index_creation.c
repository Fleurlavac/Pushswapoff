/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_creation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:57:16 by fcaval            #+#    #+#             */
/*   Updated: 2025/12/26 14:10:37 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_node(t_stack *lst)
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

	// printf("Compter les noeuds : %d\n", count);
}
int	min_stack_a(t_stack *a)
{
	int min;

	min = a -> value;
	while(a)
	{
		if (a -> index == -1 && a -> value < min)
			min = a -> value;
		a = a -> next;
	}

	// printf("le mininum : %d\n", min);

	return(min);
}

void	creating_index(t_stack *a)
{
	t_stack	*tmp;
	int		size = count_node(a);
	int		min;
	int		i;

	i = 0;
	while (i < size)
	{
		tmp = a;
		min = min_stack_a(a);
		while(tmp)
		{
			if(tmp -> value == min && tmp -> index == -1)
			{
				tmp -> index = i;
				break ;
			}
			tmp = tmp -> next;
		}
		i++;
	}
}
