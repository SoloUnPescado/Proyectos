#include<stdio.h>
#include<stdbool.h>


//----------------------------------CONSIGNA----------------------------------

/*b) Traducı a lenguaje C los programas que siguen a continuacion, agregando las instrucciones necesarias para que el usuario pueda ingresar los valores. Luego, completa los
estados, donde el estado a completar es el resultado de realizar 1, 2, 3 o 4 iteraciones
del ciclo. Una iteracion es la ejecucion completa del cuerpo del ciclo.

--------------------------------------------------------------
|    [|σ0: (x→13, y→ 3 , i→ 0 ) |]                          |
|       i := 0                                               |
|            do (x ≥ y) →                                    |
|                x := x − y                                  |
|                i := i + 1                                  |
|    [|σ01, σ11, σ21, σ31|]                                  |
|            od                                              |
|    [|σ01: (x→10 ,y→3 ,i→1 ) ,     σ11: (x→7 ,y→3 ,i→2 ) ,  |
|    luego de iter. 1,                    luego de iter. 2   |
|    σ21: (x→4 ,y→3 ,i→3 ) ,        σ31: (x→1 ,y→3 ,i→4 ) |] |
|    luego de iter. 3                     luego de iter. 4   |
------------------------------------------------------------*/


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


//-----------------------------FUNCION PRINCIPAL----------------------------------
int main()
{
    int x,y,i;

    x=pedir_entero('x');
    y=pedir_entero('y');
    i=0;

    
              

    while (x>=y)
    {
        x=x-y;
        i=i+1;
        imprimir_entero('x',x);
        imprimir_entero('y',y);
        imprimir_entero('i',i);
    }
    


    return 0;
}
