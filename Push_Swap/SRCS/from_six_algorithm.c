/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_six_algorithm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:30:18 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/20 22:26:23 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

void	from_six_numbers(t_stack *a, t_stack *b, int n_chunks)
{
	to_stack_b(a, b, n_chunks);
}

//reparto en n chunks, y paso los chunks (menos el ultimo) al stack b
void	to_stack_b(t_stack *a, t_stack *b, int n_chunks)
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
	
	while (b->length != 0)
	{
		put_num_in_top_b((b->length - 1), b);
		pa_action(a, b);
		//anadir funcion qu ebusca si el siguiente y etro estan abajo del stack a
	}
}

void	order_stack_b(t_stack *b, int index, int cut_num)
{
	if (index < (cut_num / 2))
		rb_action(b);
}
