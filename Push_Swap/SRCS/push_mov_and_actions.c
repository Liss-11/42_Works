/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mov_and_actions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:01:27 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/16 22:40:15 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

void	pa_action(t_stack *a, t_stack *b)
{
	if (b->length == 0)
		return ;
	mov_pa_pb(b, a);
	write(1, "pa\n", 3);
}

void	pb_action(t_stack *a, t_stack *b)
{
	if (a->length == 0)
		return ;
	mov_pa_pb(a, b);
	write(1, "pb\n", 3);
}

void	mov_pa_pb(t_stack *from, t_stack *to)
{
	t_element	*tmp;

	tmp = from->top_element; //es la ficha que movemos
	
	//Contemplamos dos casos, que en la pila desde donde movemos
	//haya 1 o mas de una ficha
	if(from->length > 1)
	{
		//actualizo el puntero del stack
		from->top_element = tmp->next;
		//actualizo el puntero de la ficha que ahora estara arriba
		from->top_element->prev = NULL;
	}
	else
	{
		from->bottom_element = NULL;
		from->top_element = NULL;
	}

	//Ahora enlazamos los unteros en la pila to
	//Contemplamos dos casos, la pila to esta vacio, o en la pila tp hay al	   //menos una ficha
	
	if(to->length < 1)
	{
		to->top_element = tmp;
		to->bottom_element = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = to->top_element;
		to->top_element->prev = tmp;
		to->top_element = tmp;
		
	}
	--from->length; 
	++to->length;
}


