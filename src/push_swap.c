#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_int	*a;
	t_int	*b;
	t_int	*tmpA;
	t_int	*tmpB;
	int		i;
	int		sorted;

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


	if ( ac == 3)
	{
		tmpA = ft_numbs(&a);
		tmpB = b;
	}
	else
	{
		tmpA = a;
		tmpB = b;
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

	reset();
	exit(0);
}