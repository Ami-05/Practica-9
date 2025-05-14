//Cruz Apodaca Amiel Merari
//A la calculadora que veniamos trabajando le aplicamos alfunas modificaciones

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
            
            printf ("ingresa el primer valor;\n");
            scanf ("%f" ,& a);
            printf ("ingrese el segundo valor;\n");
            scanf ("%f" ,& b);
            res=suma(a,b);
            break;
        
        
        case 2:
            printf ("ingresa el primer valor;\n");
            scanf ("%f" ,& a);
            printf ("ingrese el segundo valor;\n");
            scanf ("%f" ,& b);
            res=resta(a,b);
            break;
        
    
        case 3:
        
            printf ("ingresa el primer valor;\n");
            scanf ("%f" ,& a);
            printf ("ingrese el segundo valor;\n");
            scanf ("%f" ,& b);
            res=multiplicacion(a,b);
            break;
        
    
        case 4:
        
            printf ("ingresa el primer valor;\n");
            scanf ("%f" ,& a);
            printf ("ingrese el segundo valor;\n");
            scanf ("%f" ,& b);
            res=division(a,b);
            break;
        
        
        case 5:
        
            printf ("Ingrese valor;\n");
            scanf ("%f" ,& a);
              if (a>0) {
              res= raiz(a,c);}
              break;
        
        
        case 6:
         
            printf ("ingresa la base del numero;\n");
            scanf ("%f" ,& a);
            printf ("ingresa la potencia de la base;\n");
            scanf ("%f" ,& b);
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
