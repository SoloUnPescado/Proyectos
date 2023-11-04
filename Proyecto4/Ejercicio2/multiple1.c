#include<stdio.h>
#include<stdbool.h>
#include<assert.h>


/*2. (Asignaciones m´ultiples) Considerar las siguientes asignaciones m´ultiples
{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}

a) Escribir un programa equivalente que s´olo use secuencias de asignaciones simples.
b) Traducir los programas resultantes a C en archivos nuevos llamados multiple1.c y
multiple2.c respectivamente.
*/


int main()
{


    int x,y,z;


    printf("Ingrese un valor para x");
    scanf("%d",&x);
    printf("Ingrese un valor para y");
    scanf("%d",&y);
    

    z=x;
    x=x+1;
    y=z+y


   


 


    return 0;

    
}
