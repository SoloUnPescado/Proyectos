#include<stdio.h>
#include<stdbool.h>
#include<assert.h>


/*b) Los ejemplos a continuaci´on han sido vistos en el te´orico pr´actico. Para cada uno de
ellos, se debe obtener la pre y post condici´on y la derivaci´on. Luego, se debe traducir a
Lenguaje C el programa y las pre y post condiciones utilizando el comando assert.
(M´ınimo) C´alculo del m´ınimo entre dos variables enteras x e y. El programa en C
se debe llamar minimo.c.
(Valor Absoluto) Especificar un programa que calcule el valor absoluto de un
numero entero. Verificar que el programa es correcto, y luego traducir el programa
a C en un archivo nuevo llamado absoluto.c.
(Intercambio de variables) Traducir en intercambio.c el siguiente programa que
intercambia los valores de dos variables x e y de tipo Int.
z := x;
x := y;
y := z;
Nota: En todos los casos el programa en C, debe solicitar los valores de las variables
de entrada, e imprimir el resultado para que lo pueda ver el usuario.
*/




int main()
{
    int x;
    printf("Ingrese un valor para x\n");
    scanf("%d",&x);

    if (x>0)
    {
        printf("El valor absoluto de %d es %d",x,x);

    }else {

        printf("El valor absoluto de %d es %d",x,(-x));
    
    }
    
    

    return 0;
}
