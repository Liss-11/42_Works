/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_three_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:41:01 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/22 14:58:31 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

void	two_numbers(t_stack *a)
{
	sa_action(a);
}

void	three_numbers(t_stack *a)
{
	if (a->top_element->index == 0)
	{
		rra_action(a);
		sa_action(a);
	}
	if (a->top_element->index == 1 && a->bottom_element->index == 0)
		rra_action(a);
	if (a->top_element->index == 1 && a->bottom_element->index == 2)
		sa_action(a);
	if (a->top_element->index == 2 && a->bottom_element->index == 0)
	{
		ra_action(a);
		sa_action(a);
	}
	if (a->top_element->index == 2 && a->bottom_element->index == 1)
		ra_action(a);
}

