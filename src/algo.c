#include "../includes/push_swap.h"

t_int    *ft_numbs(t_int **lst)
{
    t_int   *temp;

    temp = *lst;
    swap(&temp);
    return (temp);
}
