#include <stdio.h>
#include <stdlib.h>
//se utiliza cuando se va a ejecutar varias veces.
int main(){
    int i;
    i=0;
    do{
        i++;
        printf("%d\n",i);
    }while(i<10);
    return 0;
}
