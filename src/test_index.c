#include "../includes/push_swap.h"

void test_index(t_int *a)
{
   green();
	while (a)
	{
        //printf("index: %d\n", a->index);
		a = a->next;
	}
	reset();
}