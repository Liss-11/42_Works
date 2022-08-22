/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_five_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:38:05 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/22 14:59:49 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/push_swap.h"

void	four_numbers(t_stack *a, t_stack *b)
{
	//Encuentra el mas pequeno - si no era el de arribe, al rotar
	put_num_in_top_a(0, a);	
	//Mira si esta ordenado
	if (stack_in_order(a) == 1)
		return ;
	//paso el mehor al stack b
	pb_action(a, b);
	//ordeno el stack a
	assign_index(a);
	three_numbers(a);
	//devuelvo el numero qu epase al stack b
	pa_action(a, b);
}

void	five_numbers(t_stack *a, t_stack *b)
{
	//Encuentra el mas pequeno - si no era el de arribe, al rotar
	put_num_in_top_a(0, a);	
	//Mira si esta ordenado
	if (stack_in_order(a) == 1)
		return ;
	pb_action(a, b);
	//busco el mas pequeno y lo pongo arriba
	put_num_in_top_a(1, a);	
	//miro si esta ordenado
	if (stack_in_order(a) == 1)
	{
		pa_action(a, b);
		return ;
	}
	pb_action(a, b);
	assign_index(a);
	three_numbers(a);
	pa_action(a, b);
	pa_action(a, b);
}
