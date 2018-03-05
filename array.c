//
//  main.c
//  array
//
//  Created by Brayan Reyes  on 04/03/18.
//  Copyright © 2018 Brayan Reyes . All rights reserved.
//

#include <stdio.h>

int main() {
    int array [10];
    array [0] = 233;
    array [4]= 42;
    array [8] = 2324;
   

    int a;
    
    for( a=0; a<10; a++){
        printf("posicion %i = %i \n", a, array [a]);
    }
    getchar();
}
