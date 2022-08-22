/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_six_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:30:18 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/22 16:35:06 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

/*void	from_six_numbers(t_stack *a, t_stack *b, int n_chunks)
{
	to_stack_b(a, b, n_chunks);
}*/

//reparto en n chunks, y paso los chunks (menos el ultimo) al stack b
//void	to_stack_b(t_stack *a, t_stack *b, int n_chunks)
void	from_six_numbers(t_stack *a, t_stack *b, int n_chunks)
{
	int			x;
	int			count;
	int			cut_num;

	count = 0;
	cut_num = a->length / n_chunks;
	//vemos si el numero esta dentro del primer chunk.... si no lo esta, lo rodmos hacia abajo, y seguimos 
	//pasamos el numero de chucks menos uno, el ultimo sera, todo lo que quede en "stack a"
//	printf("Cut Number: %d\n", cut_num);
	while (++count < n_chunks)
	{
		x = 0;
		while (x < cut_num)
		{
			if (a->top_element->index < cut_num)
			{	
				pb_action(a, b);
				order_stack_b(b, b->top_element->index, cut_num);
				x++;
			}
			else
				ra_action(a);
		}
	//reorganzar indices del chuck a, para no cambiar el numero de corte
	assign_index(a);
	}
	while (a->length != 0)
	{
		pb_action(a, b);
		order_stack_b(b, b->top_element->index, cut_num);
	}
	//reasignamos los indices en "stack b"
	assign_index(b);
	//devolvemos los numeros al "stack a" ordenados
	return_to_stack_a(a, b);
}

void	order_stack_b(t_stack *b, int index, int cut_num)
{
	if (index < (cut_num / 2))
		rb_action(b);
}

void	return_to_stack_a(t_stack *a, t_stack *b)
{
	while (b->length != 0)
	{
		//Buscamos el max index existente en el stack b, que no siempre sera "length - 1"!
		put_num_in_top_b((max_index_b(b)), a, b);
		pa_action(a, b);
		check_order_stack_a(a);
	/*	first = a->top_element;
		last = a->bottom_element;
		if (a->length > 1 && first->index != 0 && first->next->index == (first->index - 1))
			sa_action(a);
		first = a->top_element;
		if (a->length > 2 && first->index != 0 && last->index == (first->index - 1))
			rra_action(a);*/

	}
}

//En esta funcion buscamos el "max index" existente en el "stack b", que no siempre sera "length - 1"!
int	max_index_b(t_stack *b)
{
	t_element	*tmp;
	int			index;

	tmp = b->top_element;
	index = b->length - 1;
	while (tmp->next)
	{
		if (tmp->index == (index + 1))
			return (b->length);
		tmp = tmp->next;
	}
	if (tmp->index == (index + 1))
		return (b->length);
	return (index);
}

void	check_order_stack_a(t_stack *a)
{
	if (a->length > 1 && a->top_element->index != 0 
		&& a->top_element->next->index == (a->top_element->index - 1))
		sa_action(a);
	if (a->length > 1 && a->top_element->index != 0 
		&& a->bottom_element->index < a->bottom_element->prev->index)
		rra_action(a);
}
