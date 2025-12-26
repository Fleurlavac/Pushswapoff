/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:44:06 by fcaval            #+#    #+#             */
/*   Updated: 2025/12/26 15:58:09 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **a)
{
	t_stack	*tmp;

	if(!a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)-> next;
	tmp -> next = (*a)->next;
	(*a)-> next = tmp;
	ft_printf("sa\n");
}
void	push(t_stack **dest, t_stack **src)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
}
void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if(!*stack || !(*stack) -> next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	last = last_node(stack);
	
}