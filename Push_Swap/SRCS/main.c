/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 01:43:28 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/20 22:26:19 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

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
//	print_stack(&a);
	resolve(&a, &b);
//	print_stack(&b);
//	free_all(&a);
	return (0);
}

void	resolve(t_stack *a, t_stack *b)
{
	int	total_pieces;

	total_pieces = a->length + b->length;
	if (total_pieces == 2)
		two_numbers(a);
	if (total_pieces == 3)
		three_numbers(a);
	if (total_pieces == 4)
		four_numbers(a, b);
	if (total_pieces == 5)
		five_numbers(a, b);
	else if (total_pieces < 20)
		from_six_numbers(a, b, 2);
	else if (total_pieces < 101)
		from_six_numbers(a, b, 5);
	else
		from_six_numbers(a, b, 8);
		//	if (total_pieces > 100)
}

int	stack_in_order(t_stack *a)
{
	t_element	*first;
	t_element	*second;
	int			count;

	count = 0;
	first = a->top_element;
	while (first->next)
	{
		second = first->next;
		if (first->index > second->index)
			count++;
		first = second;
	}
	if (count == 0)
		return (1);
	return (0);
}

void	print_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
	exit (-1);
}

void	free_all(t_stack *f)
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
	printf("Value: %d\tIndex: %d\n", tmp->value, tmp->index);
	while (tmp->next)
	{
		tmp = tmp->next;
		printf("\nValue: %d\tIndex: %d\n", tmp->value, tmp->index);
	}
}

