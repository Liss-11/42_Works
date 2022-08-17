/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 01:43:28 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/17 02:35:06 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

/*void	resolve_case_two_pieces(t_stack *a)
{

	sa_action(a);
}*/

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc <= 1)
		return(0);
	check_errors(argc, argv);
	b.top_element = NULL;
	b.bottom_element = NULL;
	init_stack_a (&a, argc, argv);
	init_stack_b (&b);
	assign_index (&a);
	print_stack(&a);
	resolve(&a, &b);
	print_stack(&a);
	write(1, "All OK\n", 7);
//	free_all(stack *a);
	return (0);
}

void	resolve(t_stack *a, t_stack *b)
{
	int	total_pieces;

	total_pieces = a->length + b->length;
	if (total_pieces == 2)
		two_numbers(a);
	if (total_pieces > 2)
		ra_action(a);
}

void	print_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
	exit (-1);
}

//Hacer Free del stack B ??!!!

/*void	free_all(t_stack *f)
{
	t_element	*tmp;

	while (f->top_element->next != NULL)
	{
		tmp = f->top_element;
		f->top_element = tmp->next;
		free(tmp);
	}
	free(f->top_element);
}
}*/

//FUNCION para ver la lista - A BORRAR

void	print_stack(t_stack *stack)
{
	t_element	*tmp;

	if(stack->length < 1)
	{
		printf("El stack esta vacio\n");
		return ;
	}
	tmp = stack->top_element;
	printf("\n%d\n",  tmp->value);
	while (tmp->next)
	{
		tmp = tmp->next;
		printf("\n%d\n", tmp->value);
	}
}

