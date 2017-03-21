/*
Programa:
Autor:
Fecha:
Resumen:
*/

#include<stdio.h>

int main(){
    int fibo, n, x=0, y=1;

    printf("Ingrese el valor del fibonacci a conocer \n");
    scanf("%d",&n);

    int i = 0;
    while(i <= n){
        if(i == 0 || i== 1 ){
            fibo = i;
        }else{
            fibo = x + y;
            x = y;
            y = fibo;
        }
        printf(" %d ", fibo);
        i += 1;
    }
        printf("\n valor de fibonacci igual a %d \n", fibo);

return 0;

}
