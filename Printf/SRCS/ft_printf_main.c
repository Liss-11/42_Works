/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:21:42 by afrolova          #+#    #+#             */
/*   Updated: 2022/07/14 14:25:27 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	main(void)
{
	char const	*str = "\nCom\no estas %d\n %i %u\n %s %c %X %c %x\n %p %%%%%%%%\n";
	int			p;
	int			f;
	int			g;



	g = 3;
	printf(CYAN_italic "\n%s" WHITE "\n", "<-------------- Mandatory Part --------------->");
	f = ft_printf(str, 111, -22, -44, "alissia", 1, 252, 'd', -251, &g);
	printf(PURPLE "\nft_printf_retorn: %d" WHITE "\n", f);
	p = printf("\nCom\no estas %d\n %i %u\n %s %c %X %c %x\n %p %%%%%%%%\n", 111, -22, -44, "alissia", 1, 252, 'd', -251, &g);
	printf(PURPLE "\nprintf_retorn: %d" WHITE "\n", p);

//BONUS

	printf(BLUE_italic "\n%s" WHITE "\n\n", "<---------------- Bonus Part ----------------->");
	
	//Uso del 0 (Anade 0 delante para llegar a la largada indicada)
	printf(YELLOW "%s" WHITE "\n\n", "Uso del 0");
	f = ft_printf("Uso del 0 FT_PRINTF: %08d %05d\n", 111, 2);
	printf(PURPLE "ft_printf_retorn: %d" WHITE "\n", f);
	p = printf("\nUso del 0 ORIGINAL: %08d %05d\n", 111, 2);
	printf(PURPLE "Printf_retorn: %d" WHITE "\n", p);
	
	//Uso del + (Muestra el signo)
	printf(YELLOW "%s" WHITE "\n\n", "Uso del +");
	f = ft_printf("Uso del + FT_PRINTF: %+d %+d\n", 111, -2);
	printf(PURPLE "ft_printf_retorn: %d" WHITE "\n", f);
	p = printf("\nUso del + ORIGINAL: %+d %+d\n", 111, -2);
	printf(PURPLE "Printf_retorn: %d" WHITE "\n", p);

	//Uso del - (Justifica a la izquierda, respetando el ancho minimo indicado)
	printf(YELLOW "%s" WHITE "\n\n", "Uso del -");
	f = ft_printf("Uso del - FT_PRINTF: %-12d\n %-3d\n", 111, -2);
	printf(PURPLE "ft_printf_retorn: %d" WHITE "\n", f);
	p = printf("\nUso del - ORIGINAL: %-12d %-3d\n", 111, -2);
	printf(PURPLE "Printf_retorn: %d" WHITE "\n", p);

	//Uso del . (Especificador de precision.
	//Especifica el ancho o longitud maxima en string e int (float delimita decimales))
	printf(YELLOW "%s" WHITE "\n\n", "Uso del -");
	f = ft_printf("Uso del - FT_PRINTF: %-12d\n %-3d\n", 111, -2);
	printf(PURPLE "ft_printf_retorn: %d" WHITE "\n", f);
	p = printf("\nUso del - ORIGINAL: %-12.2d %-3.5d\n", 111, -2);
	printf(PURPLE "Printf_retorn: %d" WHITE "\n", p);
	return (0);
}
