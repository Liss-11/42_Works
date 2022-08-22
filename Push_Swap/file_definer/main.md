[Return_TO_MAIN_Documentation](../README.md)

<h2>Main.c</h2>

<h3>int main (int argc, char  **argv) </h3>

{
- Llama la fucnion "check_errors" -> SIN hacer las listas, repasa los posibles errores de los argumentos (ver funcion). 
<p><em>Los stacks son struct que contienen la largada del stack y dos punteros: uno al primer elemento y el ultimo al ultimo elemento del stack. Cada * Elemento -> es un nodo de una lista: contiene el value, el index, un puntero al elemento anterior, y un puntero al siguiente elemento.</em></p>

- Inicializa el stack a -> "init_stack_a (&a, argc, argv)" => en push_swap.c
- Inicializa el stack b -> "void init_stack_b(&b)" 
<br>=> en push_swap.c
- Pone indices a los elementos del stack -> "void assgn_index(&a)" 
<br>=> en push_swap.c
- Llama un u otro algoritmo segun el numero de parametros que recibe -> "void resolve(&a)"
- Hace free de todos los elementos de la lista, que al final estan en el t_stack *a -> "void free_all(t_stack *a)"

}

<br>

***

<br>

<h6>(sub_funcion de main)</h6>
<h4>void    resolve (t_stack *a, t_stack *b)</h4>

{

 - Lama la funcion que contiene el algoritmo que necesitamos en cada caso, segun el numero de parametros que recibimos. Esta funcion nos ordenara los numeros.

}

<br>

<h6>(sub_funcion >>>>>>>>>>>>>>)</h6>
<h4>int stack_in_order (t_stack *a)</h4>

{
    funcion auxiliara, que revisa si en algun momento de la ordenacion el stack a ya queda ordenado, y en este caso
TERMINAR!!!!
}

<br>

<h6>(sub_funcion de main -> check_errors)</h6>
<h4>void print_error (void)</h4>

{
- funcion que me escribe "Error\n" y hace el "exit (-1);" de mi programa. Se activa cuando encuentro un error en la entrada de los argumentos.

}
!!!!!print_error => MANDAR al archivo check_errors.c

<br>

<h6>(sub_function de main)</h6>
<h4>void free_all (t_stack *a)</h4>

{
- funcion que me libera todos los elementos de la lista, que al fnial se encuentran en el "stack a".

}
<br>


EJEMPLO para mi 

```c
printf("Hola Mundo");
return;
```



[Return_TO_MAIN_Documentation](../README.md)