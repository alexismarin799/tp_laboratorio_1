#include "Operaciones2.h"

float sumar(float numUno, float numDos);
float restar(float numUno, float numDos);
float multiplicar(float numUno, float numDos);
float dividir(float numUno, float numDos);
float factorialUno(float numUno);
float factorialDos(float numDos);


void calcular(float numUno,float numDos)
{
    float resultadoSuma;
    float resultadoResta;
    float resultadoProducto;
    float resultadoDivision;
    float resultadoFactorial1;
    float resultadoFactorial2;

    int flag = 0;
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    int flag4 = 0;
    int flag5 = 0;
    int operaciones;

    while(flag == 0)
    {
        printf("\n1-Ingrese el primer numero.\n2-Ingrese el segundo numero.\n3-Hacer operaciones.\n4-Mostrar resultados.\n5-Salir\n");
        scanf("%d", & operaciones);

        switch(operaciones)
        {
        case 1:

            numUno = pedir("Escriba primer numero: \n");
            flag1 = 1;
            break;

        case 2:

            numDos = pedir("Escriba segundo numero: \n");
            flag2 = 1;
            break;

        case 3:
            if(flag1 == 1 && flag2 == 1)
            {

                resultadoSuma = sumar(numUno, numDos);
                resultadoResta = restar(numUno, numDos);
                resultadoProducto = multiplicar(numUno, numDos);
                resultadoDivision = dividir(numUno, numDos);
                resultadoFactorial1 = factorialUno(numUno);
                resultadoFactorial2 = factorialDos(numDos);

                flag3 = 1;

            }
            else
            {
                printf("ERROR, no se pueden realizar las operaciones sin registrar los dos numeros, reingreselos nuevamente. \n");
            }

            break;

        case 4:
            if(flag1 == 1 && flag2 == 1 && flag3 == 1)
            {
                printf("La suma del numero %f y el numero %f es: %f\n", numUno, numDos, resultadoSuma);
                printf("La resta del numero %f y el numero %f es: %f\n", numUno, numDos, resultadoResta);
                printf("El producto del numero %f y el numero %f es: %f\n", numUno, numDos, resultadoProducto);
                if(numDos != 0)
                {

                    printf("La division del numero %f y el numero %f es: %f\n", numUno, numDos, resultadoDivision);
                }
                else
                {
                    printf("ERROR, no se puede dividir por cero \n");
                }

                if(numUno > 34)
                {
                    printf("Lo siento, esta aplicacion no esta preparada para dar factoriales de numeros mayores a treinta y cuatro. \n");
                }
                else
                {
                    printf("El factorial del numero %f es %f\n", numUno, resultadoFactorial1);
                }
                if(numDos > 34)
                {
                    printf("Lo siento, esta aplicacion no esta preparada para dar factoriales de numeros mayores a treinta y cuatro. \n");
                }
                else
                {
                    printf("El factorial del numero %f es %f\n", numDos, resultadoFactorial2);
                }


            }else
            {
                printf("ERROR, no se puede mostrar los resultados sin realizar las operaciones. \n");

            }

            flag3 = 0;

            break;

        case 5:
            flag = 1;
            break;

        default:
            printf("ERROR, ingrese una opcion valida: \n");
        }
    }

}

float pedir(char mensaje[])
{
    float pedido;
    printf("%s", mensaje);
    scanf("%f", & pedido);
    return pedido;
}

float pedir2(char mensaje2[])
{
    float pedido2;
    printf("%s", mensaje2);
    scanf("%f", & pedido2);
    return pedido2;
}


float sumar(float numUno, float numDos)
{
    float suma;
    suma = numUno + numDos;
    return suma;
}
float restar(float numUno, float numDos)
{
    float resta;
    resta = numUno - numDos;
    return resta;
}
float multiplicar(float numUno, float numDos)
{
    float producto;
    producto = numUno * numDos;
    return producto;
}
float dividir(float numUno, float numDos)
{
    float division;
    division = numUno / numDos;
    return division;
}
float factorialUno(float numUno)
{
    float fact = 1;
    float i;
    for(i = numUno; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;

}
float factorialDos(float numDos)
{
    float fact2 = 1;
    float i2;
    for(i2 = numDos; i2 > 0; i2--)
    {
        fact2 = fact2 * i2;
    }
    return fact2;

}


