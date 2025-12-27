/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaval < fcaval@student.42lehavre.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:46:18 by fcaval            #+#    #+#             */
/*   Updated: 2025/12/27 21:49:37 by fcaval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	if (argc < 2 || !argv[1][0])
		return (0);
	b = NULL;

	a = prepare_stack(argc, argv);
	if(!a)
		return(1);
	
	// printf("Final : %d\n", a->value);
	// printf("le next ?? : %d\n", a->next-> value);

	if (if_already_sorted(a))
	{
		// printf("a est sorti ??: %d\n", a->value);
		return (0);
	}
	creating_index(a);
	size = count_node(a);

	// printf("nombre de noeuds : %d", size);

	if (size == 2)
		sa(&a);
	else if (size == 3)
		for_three(&a);
	else if (size <= 5)
		for_five(&a, &b);
	else
		radix_sort(&a, &b);

	return (0);
}