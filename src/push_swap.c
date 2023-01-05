#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_int	*a;
	t_int	*b;

	printf("start\n");
	if (ac == 1)
	{
		printf("No args\n");
		return (0);
	}
	printf("checking...\n");
	ft_check(ac, av);
	a = initialize(ac, av);
	b = NULL;
	exit(1);
}