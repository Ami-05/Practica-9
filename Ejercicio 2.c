//Cruz Apodaca Amiel Merari
//En este programa utilizando una lista capturar las 5 calificaciones de un alumno e imprimir el promedio
#include <stdio.h>

void main()

{
    float calificaciones [5];
    float suma = 0.0;
    int i;
    printf ("Introduce las 5 calificaciones de las cuales quieres obtener el promedio:\n");
    
    for(i=0; i<5; i++)
    {
        printf("Calificacion %d: ", i+1);
        scanf("%f", &calificaciones[i]);
        suma += calificaciones[i];
    }
    
    float promedio = suma/5;
    
    printf("El promedio de las calificaciones es: %.2f\n", promedio);
}
