/*
Nombre del programa: Numeros del uno al cien.
Autor: Alejandro Santiba�ez Sanchez.
Fecha: 03/03/2017.
Resumen: Programa que suma los numero del uno al cien.
*/

#include <stdio.h>

int main(){

    int i=0, suma=0;
    while(i<=100){
        suma=suma+i;
        i++;
    }
     printf("la suma es %d \n",suma);
    return 0;
}
