/*
Programa: Sumar los pares del 1 al 50
Autor: Alejandro Santibañez Sanchez
Fecha: 11/03/2017
Resumen: Programa que suma solo los numeros pares del 1 al 50
*/

#include<stdio.h>

int main(){
    int i=2,suma=0;

    while(i<=50){
        suma=suma+i;
        i+=2;
    }
    printf("La suma es %d \n",suma);
    return 0;
}
