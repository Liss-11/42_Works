/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:02:27 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/18 21:13:56 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

int	smart_rotate_direct(int num, t_stack *stack, int *mov)
{
	int			mid;
	int			num_position;
	t_element	*top;
	
	num_position = 0;
	mid = stack->length/2;
	top = stack->top_element;
	while (top != NULL)
	{
		if (top->index == num)
			break;
		num_position++;
		top = top->next;
	}
	if (num_position == 0)
		return (NUM_IN_TOP);
	if (num_position < mid)
	{
		*mov = num_position;
		return (ROTATE_NORM);
	}	
	if (num_position >= mid)
	{
		*mov = stack->length - num_position;
		return(ROTATE_REV);
	}
	return (NUM_NOT_FOUND);
}

void	put_num_in_top_a(int num, t_stack *a)
{
	int	rotate;
	int	mov;
	int	x;

	x = 0;
	mov = 0;
	rotate = smart_rotate_direct(num, a, &mov);

	if (rotate == NUM_IN_TOP)
		return ;
	if (rotate == NUM_NOT_FOUND)
		return ;
	if (rotate == ROTATE_NORM)
	{
		while (++x <= mov)
			ra_action(a);
	}
	if (rotate == ROTATE_REV)
	{
		while (++x <= mov)
			rra_action(a);
	}
}

void	put_num_in_top_b(int num, t_stack *b)
{
	int	rotate;
	int	mov;
	int	x;

	x = 0;
	mov = 0;
	rotate = smart_rotate_direct(num, b, &mov);

	if (rotate == NUM_IN_TOP)
		return;
	if (rotate == NUM_NOT_FOUND)
//		return (NUM_NOT_FOUND);
		return;
		if (rotate == ROTATE_NORM)
	{
//		poner norma de rotar con un while
		return ;
	}
	if (rotate == ROTATE_REV)
	{
		return;
//		poner norma de rotar con un while
	}
}
