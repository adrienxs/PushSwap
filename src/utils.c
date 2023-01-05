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
	temp->prev = NULL;
	temp->n = ft_atoi(av[1]);
	temp->index = 0;
	return (temp);
}