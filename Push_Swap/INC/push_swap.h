/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 00:51:52 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/16 00:11:24 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../../Libft/libft.h"

typedef struct s_element
{
	int		value;
	int 	index;
	struct	s_element	*prev;
	struct	s_element	*next;

} t_element;

typedef struct s_stack
{
	int			length;
	t_element	*top_element;
	t_element	*bottom_element;

} t_stack;

//Main

void	print_error();

//Push_swap

void	init_stack_a (t_stack *a, int argc, char **argv, int *order);
void	assign_index(t_stack *a);

//Check_errors

void		check_errors(int argc, char **argv);
void		check_int(int argc, char **argv);
void		duplicated_num(int argc, char **argv);
int			in_order (int argc, char **argv);
long int	ft_atol(const char *str, int numbers);


#endif
