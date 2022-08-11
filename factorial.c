#include <stdio.h>
#include <stdlib.h>

// El objetivo de este programa es calcular el factorial de un número dado usando tipos de datos
// básicos de C, específicamente el double.

// Calcula el factorial de num. El rango de double permite sólo
// calcular hasta el número 170
double factorial(double num);

int main(int argc, char* argv[])
{
    int arg = 0;

    // Si existen argumentos de la línea de comandos, usa el primer
    // argumento, si no, pide input interactivamente
    if (argc > 1)
        arg = atoi(argv[1]);
    else
    {
        printf("Ingrese un número entero: ");
        scanf("%d", &arg);
    }

    double fact = factorial(arg);

    // imprime el número en notación científica si sobrepasa
    // los mil millones
    if (fact > 1000000000)
        // %.3E imprime el número en notación científica
        printf("%.3E\n");
    else
        // %.0f imprime el número sin decimales
        printf("%.0f\n", fact);

    return 0;
}

double factorial(double num)
{
    // Se inicializa en 1 para empezara multiplicar desde el 1
    double fact = 1;

    // se multiplica fact for rango de 1 a num para calcular el
    // factorial, esto es: 1 * 2 * 3 * ... * num
    for(double i = 1; i <= num; i++)
        fact = fact * i;

    return fact;
}
