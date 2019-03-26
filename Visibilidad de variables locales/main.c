#include <stdio.h>
#include <stdlib.h>

int var;
void carga(void);
void main(void)
{
int x,y,z;
var=5;
carga();
printf("%d",var);
}
void carga(void)
{
int var;//a nivel local en este punto se crea otra variable.
var=3;
}
