#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_int	*a;
	t_int	*b;
	int		i;

	if (ac == 1)
	{
		printf("No args\n");
		return (0);
	}
	ft_check(ac, av);
	a = init(ac, av);
	b = NULL;

	exit(0);
}