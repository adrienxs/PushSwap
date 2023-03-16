#include "../includes/push_swap.h"
int		ft_issmin(t_int **lst)
{
	t_int	*temp;
	int		r;
	int		position;

	temp = *lst;
	position = 1;
	while(temp)
	{
		if (temp->index == 1)
		{
			r = temp->n;
			break;
		}
		position++;
		temp = temp->next;
	}
	yellow();
	//printf("second num min: %d and position: %d\n", r, position);
	reset();
	return (position);
}

int		ft_ismin(t_int **lst, int index)
{
	t_int	*temp;
	int		r;
	int		position;

	temp = *lst;
	position = 1;
	while(temp)
	{
		if (temp->index == index)
		{
			r = temp->n;
			break;
		}
		position++;
		temp = temp->next;
	}
	yellow();
	//printf("num min: %d and position: %d\n", r, position);
	reset();
	return (position);
}

void	ft_index(t_int	**lst)
{
	t_int	*i;
	t_int	*j;

	i = *lst;
	j = *lst;
	while(i)
	{
		j = *lst;
		while(j)
		{
			if (i->n > j->n)
				i->index++;
			j = j->next;
		}
		//printf("index count: %d\n", i->index);
		i = i->next;
	}
}

int	ft_sort3(t_int **lst)
{
	t_int	*temp;
	int		count;

	temp = *lst;
	count = 0;
	if (temp->n > temp->next->n)
		count++;
	if (temp->next->n > temp->next->next->n)
		count++;
	if (temp->next->next->n > temp->n)
		count++;
	// printf("count: %d\n", count);
	return (count);
}

int		ft_issorted(t_int **lst)
{
	t_int	*temp;

	temp = *lst;
	while (temp->next)
	{
		if (temp->n > temp->next->n)
		{
			red();
			printf("3 is not sorted\n");
			reset();
			return (1);
		}	
		temp = temp->next;
	}
	yellow();
	printf("3 is sorted\n");
	reset();
	return (0);
}

t_int	*ft_before_last(t_int *lst)
{
	t_int	*curr;

	curr = lst;
	if (!curr)
		return (NULL);
	while (curr->next->next)
		curr = curr->next;
	return (curr);
}

t_int	*ft_last(t_int *lst)
{
	t_int	*curr;

	curr = lst;
	if (!curr)
		return (NULL);
	while (curr->next)
		curr = curr->next;
	return (curr);
}

t_int	*new_node(int value)
{
	t_int	*temp;

	temp = (t_int *)malloc(sizeof(t_int));
	if (!temp)
		exit(1);
	temp->n = value;
	temp->next = NULL;
	temp->index = 0;
	return (temp);
}

void	ft_addback(t_int *lst, int value)
{
	t_int	*temp;
	t_int	*last;

	temp = new_node(value);
	last = ft_last(lst);
	last->next = temp;
	temp->prev = last;
}

t_int	*init(int ac, char **av)
{
	t_int	*temp;
	int		i;

	if (!av)
		return (NULL);
	temp = new_node(ft_atoi(av[1]));
	i = 2;
	while (i < ac)
	{
		ft_addback(temp, ft_atoi(av[i]));
		i++;
	}
	return (temp);
}
	