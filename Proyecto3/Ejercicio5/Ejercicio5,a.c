#include <stdio.h>
#include <stdbool.h>



//----------------------------------CONSIGNA----------------------------------

/*a) Traducı al lenguaje C los programas 1.h y 1.i del practico. El estado σ0 debe solicitarse
al usuario, agregando las instrucciones necesarias para que el usuario pueda ingresar los
valores de las variables de entrada.
*/

//----------------------------------RESOLUCION----------------------------------


//------------------------------FUNCIONES AUXILIARES----------------------------------
 int pedir_entero(char name){
        int x;
        printf("Ingrese un valor para la variable %c\n",name);
        scanf("%d",&x);
        return x;

    }
  
    void imprimir_entero(char name,int x){

    printf("El valor de la variable %c es %d\n",name,x);
    }


//-------------------------------FUNCION PRINCIPAL----------------------------------
int main()
{
    int i=pedir_entero('i');


    while (i!=0)
    {
        imprimir_entero('i',i);
        i=i-1;
        imprimir_entero('i',i);
    }
        
    return 0;
}
