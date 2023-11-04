#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

/*/*2. (Asignaciones m´ultiples) Considerar las siguientes asignaciones m´ultiples
{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}

a) Escribir un programa equivalente que s´olo use secuencias de asignaciones simples.
b) Traducir los programas resultantes a C en archivos nuevos llamados multiple1.c y
multiple2.c respectivamente.
*/




int main()
{
    

    int x,y,z,c,t;


    printf("Ingrese un valor para x");
    scanf("%d",&x);
    printf("Ingrese un valor para y");
    scanf("%d",&y);
    printf("Ingrese un valor para z");
    scanf("%d",&z);

    t=y;
|   c=x;
    x=y;
    y=y+z+c;
    z=c+t;
    return 0;
}
