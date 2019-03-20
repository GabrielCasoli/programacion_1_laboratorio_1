#include <stdio.h>
#include <stdlib.h>

int main(){
    char hora;
    printf("ingrese una hora: ");
    fflush(stdin);//setbuf(null,stdin);
    scanf("%c",&hora);
    switch(hora){
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            printf("a dormir");
            break;
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            printf("levantate");
            break;
            default:
                printf("hola");

    }
    return 0;
}
