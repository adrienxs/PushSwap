#include "../includes/push_swap.h"

t_int	*ft_mov2(t_int **lst)
{
	t_int	*temp;

	temp = *lst;
	swap(&temp);
	return (temp);
}

t_int	*ft_mov3a(t_int **lst)
{
	t_int	*temp;

	temp = *lst;
	swap(&temp);
	return (temp);
}

t_int	*ft_mov3b(t_int **lst)
{
	t_int	*temp;

	temp = *lst;
	rotate(&temp);
	return (temp);
}

void	ft_mov5(t_int **a, t_int **b)
{

	push(a, b);
	push(a, b);
}
