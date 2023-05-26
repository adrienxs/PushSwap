#include "../includes/push_swap.h"

void test_lst(t_int *a, t_int *b)
{
   green();
	while (a)
	{
		printf("new A: %d\n", a->n);
        //printf("index: %d\n", a->index);
		a = a->next;
	}
	while (b)
	{
		printf("new B: %d\n", b->n);
		b = b->next;
	}
	// printf("Moves: %d\n", moves);
	reset();
}
