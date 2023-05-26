#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_int	*a;
	t_int	*b;
	t_int	*x;
	t_int	*y;
	int		sorted_a;
	int		moves;

	if (ac == 1)
	{
		printf("No args\n");
		return (0);
	}
	ft_check(ac, av);
	a = init(ac, av);
	b = NULL;
	sorted_a = ft_issorted(&a);
	if (sorted_a == 0)
		return (0);
	//rrotate(&a);
	//push(&a, &b);
	//rotate(&a);
	x = a;
	y = b;
	ft_index(&a);
	// ft_ismin(&a, 0);
	test_index(a);
	
	
	
	moves = 0;
	if (ac == 4)
		ft_mov3(&a);
	if (ac == 6)
		ft_mov5(&a, &b);
	if (ac == 101)
		ft_mov100(&a, &b);	
	
	test_lst(a, b);
	return (0);
}