//Cruz Apodaca Amiel Merari
//Apartir de una lista de 5 elemntos esta se tiene que imprimir

#include <stdio.h>

void main()

{
    int list[5] = {57,73,24,12,20};
    int i;
    printf ("Los numeros de la lista son: ");
    
    for(i=0; i<5; i++)
    {
        printf("%d, ", list [i]);
    }
    
    printf("\n");
}
