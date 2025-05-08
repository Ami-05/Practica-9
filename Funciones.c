//FUNCIONES
//Funcion 1
#include <stdio.h>

int suma(int a, int b)

{
    return(a+b);
}

void main()
{
    int res, a=10, b=6;
    res = suma(a,b);
    printf("La suma es: %d\n", res);
}
//Funcion 2
#include <stdio.h>

int suma(int a, int b);

void main()
{
    int res, a=10, b=6;
    res = suma(a,b);
    printf("La suma es: %d\n", res);
}

int suma(int a, int b)
{
    return(a+b);
}
