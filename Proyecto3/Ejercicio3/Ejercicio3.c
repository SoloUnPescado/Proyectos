#include <stdio.h>
#include <stdbool.h>


//----------------CONSIGNA----------------


/*Asignaciones
Traducı al lenguaje C los programas 1.a, 1.b y 1.c del practico que se encuentra en este
enlace. Esos programas estan escritos en un pseudocodigo de la materia y la traduccion a C
no siempre es directa.
El estado σ0 debe solicitarse al usuario utilizando el comando scanf(). Luego, ejecute cada
programa 3 veces con diferentes valores de las variables solicitadas y escriba los valores del
estado final resultante en la siguiente tabla:
------------------------------------------------------------------------
|    programa    |    usuario ingresa un σ0    | produce una salida σ  |
|----------------|-----------------------------|-----------------------|
|1.a ejecucion 1|             x=5             |       x=5             |        
|1.a ejecucion 2|             x=235678        |       x=5             |
|1.a ejecucion 3|             x=0             |       x=5             |
|1.b ejecucion 1|             x=7, y=8        |       x=15, y=16      |
|1.b ejecucion 2|             x=6, y=6        |       x=12, y=12      |
|1.b ejecucion 3|             x=23, y=45      |       x=68, y=90      |
|1.c ejecucion 1|             x=7, y=5        |       y=10, x=17      |
|1.c ejecucion 2|             x=6, y=6        |       y=12, x=18      |
|1.c ejecucion 3|             x=65, y=79      |       y=158, x=223    |
------------------------------------------------------------------------
*/


//----------------FUNCIONES AUXILIARES----------------

 int pedir_entero(char name){
        int x;
        printf("Ingrese un valor para la variable %c\n",name);
        scanf("%d",&x);
        return x;

    }
  
    void imprimir_entero(char name,int x){

    printf("El valor de la variable %c es %d\n",name,x);
    }


//----------------FUCNION PRINCIPAL----------------

int main() {
    
    int x = 0;
    int y = 0;

    printf("------------------------------Traduccion del programa 1a------------------------------\n");
    x=pedir_entero('x');
    x = 5;
    imprimir_entero('x',x);


    printf("------------------------------Traduccion del programa 1b------------------------------\n");
    x=pedir_entero('x');
    y=pedir_entero('y');
    x = x+y;
    imprimir_entero('x',x);
    y = y+y;
    imprimir_entero('y',y);

    printf("------------------------------Traduccion del programa 1c------------------------------\n");
    x=pedir_entero('x');
    y=pedir_entero('y');
    y=y+y;
    imprimir_entero('y',y);
    x=x+y;
    imprimir_entero('x',x);

    return 0;
}
