#include <stdio.h>
#include <stdlib.h>

int main(){
    char hora;
    printf("ingrese una hora: ");
    scanf("%c",&hora);
    switch(hora){
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            printf("a dormir");
            break;
            case '6':
            case '7':
            case '8':
            case '9':
            printf("levantate");
            break;
            default:
                printf("hola");

    }
    return 0;
}
