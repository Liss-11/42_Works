/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 01:43:28 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/16 00:11:20 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int	order;

	order = 0;
	if (argc <= 1)
		return(0);
	check_errors(argc, argv);
	b.top_element = NULL;
	b.bottom_element = NULL;
	init_stack_a (&a, argc, argv, &order);
	if (order != 0)
		return (0);
	assign_index (&a);
	return (0);
}

void	print_error(void)
{
	write(1, "Error", 5);
	exit (-1);
}

/*void	free_all(t_stack *f)
{
	t_element	*tmp;

	while (f->top_element != NULL)
	{
		tmp = f->top_element;
		f->top_element = tmp->next;
		free(tmp);
	}
}
}*/

