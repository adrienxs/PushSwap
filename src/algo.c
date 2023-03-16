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

	if (ft_ismin(a, 0) == 2)
		rotate(a);
	else if (ft_ismin(a, 0) == 3)
	{	
		rotate(a);
		rotate(a);
	}
	else if (ft_ismin(a, 0) == 4)
	{
		rrotate(a);
		rrotate(a);
	}
	else if (ft_ismin(a, 0) == 5)
		rrotate(a);
	push(a, b);

	if (ft_issmin(a) == 2)
		rotate(a);
	else if (ft_issmin(a) == 3)
	{	
		rotate(a);
		rotate(a);
	}
	else if (ft_issmin(a) == 4)
	{
		rrotate(a);
	}
	push(a, b);
	ft_mov3(a);

	// sorted_b = ft_issorted(b);
	// while (sorted_b == 1)
	// {
	// 	swap(b);
	// 	sorted_b = ft_issorted(b);
	// }

	push(b, a);
	push(b, a);
}

void	ft_mov100(t_int **a, t_int **b)
{
	t_int	*a_temp;
	t_int	*b_temp;
	int		i;
	int		position;

	i = 0;
	a_temp = *a;
	b_temp = *b;

	while (i < 10)
	{
		if (a_temp->index < 20)
		{
			position = ft_ismin(a, i) - 1;
			if (position > 0)
			{
				while (position)
				{
					rotate(a);
					position--;
				}
			}	
		}
	push(a, b);
	a_temp = *a;
	a_temp = a_temp->next;
	i++;
	}
}	

//quealquier numero con index mas peqeno que 20 subelo arriba
