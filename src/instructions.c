#include "../includes/push_swap.h"

void	swap(t_int **lst)
{
	t_int	*first;
	t_int	*third;

	if (!*lst || !(*lst)->next)
		return ;
	first = *lst;
	third = (*lst)->next->next;
	*lst = (*lst)->next;
	(*lst)->next = first;
	(*lst)->next->next = third;
	yellow();
	printf("swap\n");
	reset();
}

void	push(t_int **a, t_int **b)
{
	t_int	*first_a;
	t_int	*first_b;

	first_a = *a;
	*a = (*a)->next;
	if (*b)
	{
		first_b = *b;
		*b = first_a;
		(*b)->next = first_b;
	}
	else
	{
		*b = first_a;
		(*b)->next = NULL;
	}
	yellow();
	printf("push\n");
	reset();
}

void	rotate(t_int **lst)
{
	t_int	*first;
	t_int	*last;

	if (!*lst || !(*lst)->next)
		return ;
	first = (*lst);
	last = ft_last(*lst);
	*lst = (*lst)->next;
	last->next = first;
	first->next = NULL;
	yellow();
	printf("rotate\n");
	reset();
}

void	rrotate(t_int **lst)
{
	t_int	*first;
	t_int	*slast;
	t_int	*last;

	if (!*lst || !(*lst)->next)
		return ;
	first = (*lst);
	last = ft_last(*lst);
	slast = ft_before_last(*lst);
	*lst = last;
	last->next = first;
	slast->next = NULL;
	yellow();
	printf("rev. rotate\n");
	reset();
}