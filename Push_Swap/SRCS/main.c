/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 01:43:28 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/22 15:57:05 by afrolova         ###   ########.fr       */
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
	init_stack_a (&a, argc, argv);
	init_stack_b (&b);
 	assign_index (&a);
	resolve(&a, &b);
	free_all(&a);
	return (0);
}

void	resolve(t_stack *a, t_stack *b)
{
	if (a->length == 2)
		two_numbers(a);
	if (a->length == 3)
		three_numbers(a);
	if (a->length == 4)
		four_numbers(a, b);
	if (a->length == 5)
		five_numbers(a, b);
	else if (a->length < 20)
		from_six_numbers(a, b, 2);
	else if (a->length < 101)
		from_six_numbers(a, b, 5);
	else
		from_six_numbers(a, b, 8);
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

void	free_all(t_stack *a)
{
	t_element	*tmp;

	while (a->top_element->next != NULL)
	{
		tmp = a->top_element;
		a->top_element = tmp->next;
		free(tmp);
	}
	free(a->top_element);
}
