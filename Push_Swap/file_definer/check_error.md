<h2>Check_Errors.c</h2>

<h3>void    check_errors (int argc, char **argv)</h3>

{
- Llama sub_funciones que comprueban los diferentes los diferentes tipos de errores de entrada de parametros.
- Mira si me entran solo numeros, y que estos numeros sean "int" -> "void check_int (int argc, char **argv)"
- Comprueba que los numeros no esten duplicados -> "void duplicated_num (int argc, char **argv)"
- Miro si los numeros ya estan ordenados. En este caso, nuestro programa no debe hacer nada... -> "int in_order()"

}

<br>

<h6>(sub_funcion de check_errors)</h6>
<h4>void    check_int (int argc, char **argv)</h4>

{
- llama al ft_atol -> "long int ft_atol (const char *str, int numbers)"
- mira si el numero recibido es un int -> sino, ERROR. (la funcion atiol gestiona NULL y cadena vacia, y tambien mira si hay caracteres no_numericos al final de un numero)

}

<br>

<h6>(sub_funcion de check_errors)</h6>
<h4>void duplicated_num (int argc, char **argv)</h4>

{
- Mira si en los argumentos que recibimos hay algun numero repetido. Solo lo llegara a mirar si antes pasa la prueba de chck_int!

}

<h4>int inorder (int argc, char **argv)</h4>

{
- Mira si los argumentos que recibimos ya estan ordenados -> solo lo mira si son todo int y si no hay numeros repetidos.

}

(sub_funcion de check_error => check_int)
<h5>long int ft_atol (const char *str, int numbers)</h5>

{
- Es un atoi que recibe long int
- anade una condicion de devolver error encaso de que el numero este terminado en caracteres no_numericos
- Detecta si alguna vez encontramos un numero, para que no nos devuelva 0 en caso de encontrar un NULL o cadena vacia

}
<br>