#include "../includes/push_swap.h"

void	ft_mov3(t_int **lst)
{
	int	sorted_a;

	sorted_a = ft_issorted(lst);
	while (sorted_a == 1)
	{
		if (ft_sort3(lst) == 1)
			rotate(lst);
		else if (ft_sort3(lst) == 2)
			swap(lst);

		sorted_a = ft_issorted(lst);
	}
}

void	ft_mov5(t_int **a, t_int **b)
{
	int	sorted_a;
	int	sorted_b;

	push(a, b);
	push(a, b);

	sorted_a = ft_issorted(a);
	while (sorted_a == 1)
	{
		if (ft_sort3(a) == 1)
			rotate(a);
		else if (ft_sort3(a) == 2)
			swap(a);

		sorted_a = ft_issorted(a);
	}

	// sorted_b = ft_issorted(b);
	// while (sorted_b == 1)
	// {
	// 	swap(b);
	// 	sorted_b = ft_issorted(b);
	// }

	push(b, a);
	push(b, a);
}
