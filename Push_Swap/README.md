<a name="top"></a>
<h1>PUSH SWAP</h1>

FICHEROS

[Main](file_definel/main.md)

[Check_Error](file_definer/check_error.md)

[Initializer](file_definer/initializer.md)

Movimientos

[Swap_Mov_And_Acions](file_definer/Movimientos/swap_mov_and_action.md)

[Push_Mov_And_Acions](file_definer/Movimientos/push_mov_and_actions.md)

[Rotate_Mov_And_Acions](file_definer/Movimientos/rotate_mov_and_actions.md)

[Reverse_Mov_And_Acions](file_definer/Movimientos/reverse_mov_and_actions.md)

Smart_Rotate

[Smart_Rotate](file_definer/smart_rotate.md)

Algoritmos

[Two_Three_Algorithm](file_definer/Algoritmos/two_three_algorthm.md)

[Four_Five_Algorithm](file_definer/Algoritmos/four_five_algorthm.md)

[From_Six_Algorithm](file_definer/Algoritmos/from_six_algorthm.md)

<br>

***

<br>


[Ir arriba del documento](#top)

<br>
<h2>Two_Three_Algorith.c</h2>

<h3>void    two_numbers(t_stack *a)</h3>

{
- Si recibo solo dos numeros, llamo esta funcion, que usa solo el "stack a".
- Como en los errores ya miro que los parametros que me entran no esten ordenados, llamare esta funcion solo en el caso que entren dos numeros, y esten en orden inverso. 
- Entonces, simplemente los giro.

}

<h3>void    three_numbers (t_stack *a)</h3>

{
- En el caso que reciba 3 numeros (desordenados). Hay solo 5 posibles opciones de ordenacion.
- Miro todas las opciones con "if", y escojo la que se ajusta a mi caso.
- Cada opcion lleva la combinacion de ordenes exacta, para que el stack quede ordenado.

}
<br>

[Ir arriba del documento](#top)

<br>