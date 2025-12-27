#include "push_swap.h"

void	for_three(t_stack **a)
{
	int	one;
	int two;
	int	three;

	one = (*a)->value;
	two = (*a)->next->value;
	three = (*a)->next->next->value;

	if (one > two && two < three && one < three)
		sa(a);
	else if (one > two && two > three)
	{
		sa(a);
		rra(a);
	}
	else if (one > two && two < three && one > three)
		ra(a);
	else if (one < two && two > three && one < three)
	{
		sa(a);
		ra(a);
	}
	else if (one < two && two > three && one > three)
		rra(a);
}
void	sort_five(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	while (size > 3)
	{
		if((*a)-> index == 0)
			pb(a, b);
		else
			ra(a);
		size = stack_size(*a);
	}
	sort_three(a);
	if (*b && (*b)-> next && (*b)->index > (*b)->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
}

void	radix_sort(t_stack **a, t_stack **b)