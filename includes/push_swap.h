#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
#include <stdio.h>
# include "libft/libft.h"

void	ft_check(int ac, char **av); /* ac: argument count, av: argument value */

typedef struct t_int
{
	int				n; /* El num introducido en argc */
	int				index;
	struct t_int	*prev; /* Una var struct dentro de un struct? */
	struct t_int	*next;
}					t_int; /* Que es esto? */

t_int	*initialize(int ac, char **av);

#endif