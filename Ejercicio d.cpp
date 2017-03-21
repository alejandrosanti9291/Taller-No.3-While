/*
Programa: Sumas los numeros impares del 1 al 50
Autor: Alejandro Santibañes Sanchez
Fecha: 11/03/2017
Resumen: Programa que suma los numeros impares del 1 al 50
*/

#include<stdio.h>

int main(){
    int i=1,suma=0;

    while(i<26){
        suma=suma+(2*i-1);
         i+=1;
        }
    printf("La suma es %d \n",suma);
    return 0;
}
