#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_int	*a;
	t_int	*b;
	t_int	*tmpA;
	t_int	*tmpB;
	int		i;
	int		sorted_a;
	int		sorted_b;
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
	sorted_a = ft_issorted(&a);
	if (sorted_a == 0)
		return (0);
	//rrotate(&a);
	//push(&a, &b);
	//rotate(&a);

	tmpA = a;
	tmpB = b;
	moves = 0;

	if (ac == 4)
		ft_mov3(&a);
	if (ac == 6)
		ft_mov5(&a, &b);

	tmpA = a;
	tmpB = b;



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