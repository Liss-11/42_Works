/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_mov_and_actions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:17:48 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/17 02:35:09 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

void	ra_action(t_stack *a)
{
	mov_ra_rb_rr(a);
//	write(1, "ra\n", 3);
	printf("ra");
}

void	rb_action(t_stack *b)
{
	if (b->length < 2)
		return ;
	if (b->length == 2)
//	Hago swap
		mov_sa_sb_ss(b);
	mov_ra_rb_rr(b);
	write(1, "rb\n", 3);
}

void	rr_action(t_stack *a, t_stack *b)
{
	if (a->length == 2)
		mov_sa_sb_ss(a);
	if (a->length == 2)
		mov_sa_sb_ss(b);
	if (a->length >= 2 || b->length >= 2)
	{
		mov_ra_rb_rr(a);
		mov_ra_rb_rr(b);
		write(1, "rr\n", 3);
	}
}
 //ERRONEO
 
void	mov_ra_rb_rr(t_stack *stack)
{
	t_element	*tmp;
	t_element	*mov;

	
	tmp = stack->top_element;
	stack->top_element = tmp->next;
	mov = tmp;
	stack->top_element = tmp->next;
	stack->top_element->prev = NULL;
//printf("bottom %d\n", stack->bottom_element->value);
//	printf("tmp %d\n", tmp->value);
	while (mov->next)
	{
		mov = mov->next;
		stack->top_element = mov;
		printf("bottom %d\n", stack->bottom_element->value);
	}
	mov = stack->bottom_element;
	stack->bottom_element->prev = mov;
	tmp->next = NULL;
	stack->bottom_element  = tmp;
	

	printf("top %d\n", stack->top_element->value);
	

}



