/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval < fcaval@student.42lehavre.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:40:12 by fcaval            #+#    #+#             */
/*   Updated: 2025/12/27 21:47:18 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
}
void	sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
}
void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("pa\n");
}
void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_printf("pb\n");
}
void	ra(t_stack **a)
{
	rotate(a);
	ft_printf("ra\n");
}
void	rb(t_stack **b)
{
	rotate(b);
	ft_printf("rb\n");
}
void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}
void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}
void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
