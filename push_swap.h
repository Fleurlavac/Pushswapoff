/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval <fcaval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:30:14 by fcaval            #+#    #+#             */
/*   Updated: 2025/12/26 15:11:12 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

t_stack	*create_node(int value);
t_stack	*prepare_stack(int argc, char **argv);
t_stack	*last_node(t_stack *lst);
int		count_node(t_stack *lst);
void	lst_add_back(t_stack **lst, t_stack *new);
int		if_already_sorted(t_stack *a);
void	creating_index(t_stack *a);
int		min_stack_a(t_stack *a);
int		count_node(t_stack *lst);
int		min_stack_a(t_stack *a);
void	creating_index(t_stack *a);
void	sa(t_stack **a);

#endif