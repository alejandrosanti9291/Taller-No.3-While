/*
Programa: Solucionar el factorial de un numero
Autor: Alejandro Santibañez Sanchez
Fecha: 11/03/2017
Resumen: Programa que muestra el factorial de un numero
*/

#include<stdio.h>

int main(){
    int i=1,facto=1,Num;

    printf("Ingrese el numero del cual desea saber su factorial \n");
    scanf("%d",&Num);
    while(i<=Num){
        facto=facto*i;
        i+=1;
    }
    printf("El factorial es %d \n",facto);


    return 0;
}
