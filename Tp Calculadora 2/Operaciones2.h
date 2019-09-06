#include <stdio.h>

/** \brief permite el ingreso de datos, en este caso los dos numeros correspondientes,
 *
 * \param char[] para mostrar el mensaje que se le acredita
 * \return float retorna al pedido
 *
 */
float pedir(char[]);
float pedir2(char[]);

/** \brief funcion para calcular las operaciones
 *
 * \param numUno float primer numero ingresado
 * \param numDos float segundo numero ingresado
 * \return void retorna a la funcion calcular el resultado
 *
 */
void calcular(float numUno, float numDos);

/** \brief en el se encontrara un switch con los case de las opciones principales del menu, en el cual en cada case se realiza
una labor diferente, en el CASE 1 se ingresa primer numero, en el CASE 2 se ingresa el segundo numero, en el CASE 3 se realizan
las operaciones, en el CASE 4 se muestran los resultados y en el CASE 5 se muestra la opcion "Salir" para cerrar la aplicacion
 *
 * \param numUno float primer numero ingresado
 * \param numDos float segundo numero ingresado
 * \return float retorna con el resultado despues de haber realizado las funciones designadas segun cada opcion
 *
 */
float sumar(float numUno, float numDos);
float restar(float numUno, float numDos);
float multiplicar(float numUno, float numDos);
float dividir(float numUno, float numDos);

/** \brief realiza la operacion factorial del primer numero ingresado
 *
 * \param numUno float primer numero ingresado
 * \return float retorna con el factorial del primer numero ingresado
 *
 */
float factorialUno(float numUno);

/** \brief  realiza la operacion factorial del segundo numero ingresado
 *
 * \param numDos float segundo numero ingresado
 * \return float retorna con el factorial del segundo numero ingresado
 *
 */
float factorialDos(float numDos);

