#include <stdio.h>
#include <stdlib.h>

int main(){
int valor,resp=1,i;
printf("\nIngrese numero:");
scanf("%d",&valor);

for(i=1;i<=valor;i++){//for(i=valor;i>0;i--)
    resp=resp*i;
}
printf("El resultado es: %d",resp);
return resp;
}
