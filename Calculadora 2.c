//Cruz Apodaca Amiel Merari
//Esta calculadora ya tiene valores asignados, a partir de que eliges la operacion solo da el resultado en base a los numeros impuestos en el programa
#include <stdio.h>
#include <math.h>

float suma (float a, float b) {
    return (a+b);
}

float resta (float a, float b) {
    return (a-b);
}

float multiplicacion (float a, float b) {
    return a*b;
}

float division (float a, float b) {
    return(a/b);
}

float potencia (float a, float b) {
    return(pow(a,b));
}

float raiz (float a, int c) {
    return (sqrt(a));
}

void main()
{
    float res;
    float a, b;
    int c;
    int op;
    a=10, b=3,c=5;
    
     do
    { 
        printf ("Menu: \n");
        printf ("escoje una opción; \n");
        printf ("1- Suma \n");
        printf ("2- Resta \n");
        printf ("3- Multiplicación \n");
        printf ("4- División\n");
        printf ("5- Raiz cuadrada\n");
        printf ("6- Potencia\n");
        printf ("0- Salida\n");
        //Leer op//  
        scanf ("%d" , &op);
    }
  // Si op < 0 y op > 6//
    while (op < 0 || op > 6);
    
    do
{
    
   
    //ingresar a la opción escogida//
    switch (op)
    {
        case 1: 
            
            res=suma(a,b);
            break;
        
        
        case 2:
        
            res=resta(a,b);
            break;
        
    
        case 3:
        
            res=multiplicacion(a,b);
            break;
        
    
        case 4:
        
            res=division(a,b);
            break;
        
        
        case 5:
        
              res= raiz(a,c);
              break;
        
        
        case 6:
         
            res= potencia(a,b);
            break;
        
    }
    
//Imprimir res//
printf ("el resultado de la operación es;%.2f\n", res);
printf ("\n");

//Imprimir Menú//

     printf ("Menu: \n");
        printf ("escoje una opción; \n");
        printf ("1- Suma \n");
        printf ("2- Resta \n");
        printf ("3- Multiplicación \n");
        printf ("4- División\n");
        printf ("5- Raiz cuadrada\n");
        printf ("6- Potencia\n");
        printf ("0- Salida\n");
    //Leer op//
    scanf ("%d" , &op);
}
    //Si op es diferente de 0//
    while (op != 0);
}
