//
//  main.c
//  calculadora
//
//  Created by Brayan Reyes  on 04/03/18.
//  Copyright © 2018 Brayan Reyes . All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    float a = 0;
    float b = 0;
    int opcion = 0;
    float resultado;
    do{
        printf("\n- -CALCULADORA- -");
        printf("\n\n1.-sumar");
        printf("\n2.-restar");
        printf("\n3.-multiplicar");
        printf("\n4.-dividir");
        printf("\n5.-salir");
        
        printf("\n\nElegir una opcion:   ");
        scanf("%i", &opcion);
        
        switch (opcion) {
            case 1:/*sumar*/
                printf("\n            -> Introduce el primer numero:   ");
                scanf("%f",&a);
                printf("\n           -> Introduce el segundo numero  "  );
                scanf("%f",&b);
                resultado= a + b;
                printf("\n       -> La suma de %f + %f es igual a %f\n",a,b,resultado);
                break;
                
            case 2:/*restar*/
                printf("\n            -> Introduce el primer numero:   ");
                scanf("%f",&a);
                printf("\n           -> Introduce el segundo numero  "  );
                scanf("%f",&b);
                resultado= a - b;
                printf("\n       -> La resta de %f - %f es igual a %f\n",a,b,resultado);
                break;
            case 3:/*multiplicacion*/
                printf("\n            -> Introduce el primer numero:   ");
                scanf("%f",&a);
                printf("\n           -> Introduce el segundo numero  "  );
                scanf("%f",&b);
                resultado= a * b;
                printf("\n       -> La multiplicacion de %f * %f es igual a %f\n",a,b,resultado);
                break;
            case 4:/*divicion*/
                printf("\n            -> Introduce el primer numero:   ");
                scanf("%f",&a);
                printf("\n           -> Introduce el segundo numero  "  );
                scanf("%f",&b);
                resultado= a / b;
                printf("\n       -> La divicion de %f / %f es igual a %f\n",a,b,resultado);
                break;
            case 5:/*SALIR*/
                break;
        }
    } while (opcion!=5);
        
    

    
    return (EXIT_SUCCESS);

    
}
