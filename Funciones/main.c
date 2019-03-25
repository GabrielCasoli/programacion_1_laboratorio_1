#include <stdio.h>
#include <stdlib.h>

int suma(int op1,int op2);//declaracion prototipo.
int main(){
int n1,n2,result;//pide memoria para 3 variables.
printf("numero 1: ");
scanf("%d",&n1);
printf("numero 2: ");
scanf("%d",&n2);
result=suma(n1,n2);//llamada a la funcion.
printf("La suma es: %d",result);
return 0;
}
//cuerpo desarrollo definicion.
int suma(int op1, int op2){//declaracion de variables.
    int res;
    res=op1+op2;
    return res;
}
