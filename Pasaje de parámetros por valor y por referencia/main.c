#include <stdio.h>
#include <stdlib.h>
//esto es pasaje de referencia al usar * y &, si no seria pasaje de valores.
void muestra(int *x,int y);//al usar *
void main(void){
int x,y;
printf("Ingrese un numero entero");
scanf("%d",&x);
printf("Ingrese un numero entero");
scanf("%d",&y);
muestra(&x,y);//al usar &
printf("\n-----valores dentro de main----");
printf("\nx vale %d \ny vale %d",x,y);
}
void muestra(int *x,int y)//al usar *
{
*x=y;//aca le asigno el valor de x a y //al usar *
printf("\n-----valores dentro de la funcion----");
printf("\nx vale %d \ny vale %d",*x,y);
}
