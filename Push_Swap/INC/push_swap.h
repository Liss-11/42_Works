/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 00:51:52 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/20 22:26:39 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../../Libft/libft.h"

//MACROS

#define NUM_NOT_FOUND 0
#define ROTATE_NORM 1
#define ROTATE_REV 2
#define	NUM_IN_TOP 3

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

//main

void	resolve(t_stack *a, t_stack *b);
void	print_error();
int		stack_in_order(t_stack *a);
//funcion A BORRAR
void		print_stack(t_stack *stack);

//push_swap

void	init_stack_a (t_stack *a, int argc, char **argv);
void	init_stack_b (t_stack *b);
void	assign_index(t_stack *a);

//check_errors

void		check_errors(int argc, char **argv);
void		check_int(int argc, char **argv);
void		duplicated_num(int argc, char **argv);
int			in_order (int argc, char **argv);
long int	ft_atol(const char *str, int numbers);

//swap_mov_and_actions

void	mov_sa_sb_ss(t_stack *stack);
void	sa_action(t_stack *a);
void	sb_action(t_stack *b);
void	ss_action(t_stack *a, t_stack *b);

//push_mov_and_actions

void	mov_pa_pb(t_stack *from, t_stack *to);
void	pa_action(t_stack *a, t_stack *b);
void	pb_action(t_stack *a, t_stack *b);

//rotate_mov_and_actions

void	mov_ra_rb_rr(t_stack *stack);
void	ra_action(t_stack *a);
void	rb_action(t_stack *b);
void	rr_action(t_stack *a, t_stack *b);

//reverse_mov_and_actions

void	mov_rra_rrb_rrr(t_stack *stack);
void	rra_action(t_stack *a);
void	rrb_action(t_stack *b);
void	rrr_action(t_stack *a, t_stack *b);

//two_three_algorith

void	two_numbers(t_stack *a);
void	three_numbers(t_stack *a);

//four_five_algorithm

void	four_numbers(t_stack *a, t_stack *b);
void	five_numbers(t_stack *a, t_stack *b);

//from_six_algorith

void	from_six_numbers(t_stack *a, t_stack *b, int n_chunks);
void	to_stack_b(t_stack *a, t_stack *b, int n_chunks);
void	order_stack_b(t_stack *b, int index, int cut_num);

//smart_rotate

int		smart_rotate_direct(int num, t_stack *stack, int *mov);
void	put_num_in_top_a(int num, t_stack *a);
void	put_num_in_top_b(int num, t_stack *b);

void	free_all(t_stack *f);


#endif
