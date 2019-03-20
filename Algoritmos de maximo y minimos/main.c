#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //se agrega cuando se utiliza rta=toupper(rta);
int main(){
    //int contador=0;
    //int acumulador=0;
    //contador variable=variable+k(numero entero);
    // acumulador variable=variable+variable2;
    int nro, max, min,flag=0;
    char rta;//respuesta
    do{
        printf("ingrese un nro: ");
        scanf("%d",&nro);
        if(flag==0|| nro>max){
            max=nro;
        }
        if(flag==0||nro<min){
            min=nro;
            flag=1;
        }
       do{
        printf("continuar?[S/N]");
        fflush(stdin);
        scanf("%c",&rta);
        rta=toupper(rta);
       }while(rta!='S'&&rta!='N');
    }while(rta=='S');
    system("cls");//limpia la pantalla
    printf("el nro maximo es %d\n El nro minimo es %d",max,min);
    return 0;
}
