/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 00:20:56 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/16 00:11:13 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

static void	init_element(t_element *o, char *arg)
{
	o->value = ft_atoi(arg);
	o->next = NULL;
	o->prev = NULL;
}

void	init_stack_a (t_stack *a, int argc, char **argv, int *order)
{
	t_element	*new_element;
	t_element	*tmp;

	a->length = 0;
	a->top_element = NULL;
	while ((a->length + 1) < argc)
	{
		new_element = malloc(sizeof(t_element));
		init_element(new_element, argv[a->length + 1]);
		if(!a->top_element)
		{
			a->length++;
			a->bottom_element = new_element;
			a->top_element = new_element;
		}
		else
		{
			a->length++;
			tmp = a->bottom_element;
			a->bottom_element = new_element;
			a->bottom_element->prev = tmp;
			tmp->next = a->bottom_element;
		}
	}
	if(a->length == 1)
		*order = 1;

	printf("El lenght %d\n", a->length);
	printf("En top element tengo el %d\n", a->top_element->value);
	printf("En el bottom element tengo el %d\n", a->bottom_element->value);
}

void	assign_index(t_stack *a)
{
	t_element	*tmp;
	t_element	*current;
	int			count;
	int			index;

	count = 0;
	a->bottom_element = a->top_element;
	while (count < a->length)
	{
		tmp = a->top_element;
		index = 0;
		while (tmp != NULL)
		{
			current = tmp;
			if (a->bottom_element->value > current->value)
				index++;
			tmp = current->next;
		}
		a->bottom_element->index = index;
		printf("Index del numero %d, es %d\n", a->bottom_element->value, a->bottom_element->index);
		tmp = a->bottom_element->next;
		a->bottom_element = tmp;
		count++;
	}
}
