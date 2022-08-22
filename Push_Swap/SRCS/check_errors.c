/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 01:45:09 by afrolova          #+#    #+#             */
/*   Updated: 2022/08/22 15:50:46 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../INC/push_swap.h"

void	check_errors(int argc, char **argv)
{
	check_int(argc, argv);
	duplicated_num(argc, argv);
	if ((in_order(argc, argv)) == 0)
		exit (0);
}

void	check_int(int argc, char **argv)
{

	long int	num;
	int			count;
	int			numbers;

	numbers = 0;
	count = 0;
	while (++count < argc)
	{
		num = ft_atol(argv[count], numbers);
		if(num > 2147483647 || num < -2147483648)
			print_error();
	}
}

void	duplicated_num(int argc, char **argv)
{
	int	count;
	int	current;
	int	num1;
	int	num2;

	count = 0;
	while (++count < argc)
	{
		num1 = ft_atoi(argv[count]);
		current = count;
		while (++current < argc)
		{
			if (count == current)
				continue ;
			num2 = ft_atoi(argv[current]);
			if (num1 == num2)
				print_error();
		}
	}
}

int	in_order(int argc, char **argv)
{
	int	count;
	int	num1;
	int	num2;
	int	check;

	count = 0;
	check = 0;
	while (++count < (argc - 1))
	{
		num1 = ft_atoi(argv[count]);
		num2 = ft_atoi(argv[count + 1]);
		if (num2 < num1)
		{
			check++;
			break ;
		}
	}
	return (check);
}

long int	ft_atol(const char *str, int numbers)
{
	long int	i;
	long int	res;
	long int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (*(str + i) == ' ' || *(str + i) == '\n' || *(str + i) == '\t'
		|| *(str + i) == '\r' || *(str + i) == '\v' || *(str + i) == '\f')
		i++;
	if (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	while ((*(str + i) >= '0' && *(str + i) <= '9'))
	{
		res = (res * 10) + (*(str + i) - '0');
		i++;
		numbers++;
	}
	if ((*(str + i) &&(*(str + i) <= '0' || *(str + i) >= '9'))
			|| numbers == 0)
		print_error();
	return (res * sign);
}
