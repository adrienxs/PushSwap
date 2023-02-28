#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_int	*a;
	t_int	*b;
	t_int	*tmpA;
	t_int	*tmpB;
	int		i;
	int		sorted;
	int		moves;

	if (ac == 1)
	{
		printf("No args\n");
		return (0);
	}
	ft_check(ac, av);
	a = init(ac, av);
	b = NULL;
	tmpA = a;
	green();
	while (tmpA)
	{
		printf("stack A: %d\n", tmpA->n);
		tmpA = tmpA->next;
	}
	reset();
	sorted = ft_issorted(&a);
	if (sorted == 0)
		return (0);
	//rrotate(&a);
	//push(&a, &b);
	//rotate(&a);

	tmpA = a;
	tmpB = b;

	moves = 0;
	// if (ac == 4)
	// {
	// 	while (sorted == 1)
	// 	{
	// 		if (ft_sort3(&a) == 1)
	// 			a = ft_mov3b(&a);
	// 		else if (ft_sort3(&a) == 2)
	// 			a = ft_mov3a(&a);
			
	// 		tmpA = a;
	// 		moves++;
	// 		sorted = ft_issorted(&a);
	// 		printf("sorted: %d\n", sorted);
	// 	}
	// }

	ft_mov5(&a, &b);
	tmpA = a;
	tmpB = b;

if (ac == 4)
	{
		while (sorted == 1)
		{
			if (ft_sort3(&a) == 1)
				a = ft_mov3b(&a);
			else if (ft_sort3(&a) == 2)
				a = ft_mov3a(&a);
			
			tmpA = a;
			moves++;
			sorted = ft_issorted(&a);
			printf("sorted: %d\n", sorted);
		}
	}



	green();
	while (tmpA)
	{
		printf("new A: %d\n", tmpA->n);
		tmpA = tmpA->next;
	}
	while (tmpB)
	{
		printf("new B: %d\n", tmpB->n);
		tmpB = tmpB->next;
	}
	printf("Moves: %d\n", moves);
	reset();
	return (0);
}