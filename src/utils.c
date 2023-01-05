#include "../includes/push_swap.h"

t_int	*initialize(int ac, char **av)
{
	t_int	*temp;
	int		i;

	if (!av)
		return (NULL);
	i = 2;
	temp = (t_int *)malloc(sizeof(t_int));
	if (!temp)
		exit(1);
	temp->next = NULL;
	temp->n = ft_atoi(av[1]);
	temp->index = 0;
	return (temp);
}

void	red(void)
{
	printf("\033[0;31m");
}

void	yellow(void)
{
	printf("\033[1;33m");
}

void	green(void)
{
	printf("\033[0;32m");
}

void	reset(void)
{
	printf("\033[0m");
}