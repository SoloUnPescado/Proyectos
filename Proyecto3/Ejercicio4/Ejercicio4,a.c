#include<stdio.h>
#include<stdbool.h>

//----------------CONSIGNA----------------

/*a) Traducı al lenguaje C los programas 1.e y 1.f de este practico.
El estado σ0 debe solicitarse al usuario, agregando las instrucciones necesarias para que
el usuario pueda ingresar los valores de las variables de entrada.*/

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


//----------------FUNCION PRINCIPAL----------------

int main()
{
     printf("-------------------------------Ejercicio 1e-------------------------------");
   
    int x=pedir_entero('x');
    int y=pedir_entero('y');

    if (x>=y){
        imprimir_entero('x',x);
        imprimir_entero('y',y);
        x=0;
        imprimir_entero('x',x);
        imprimir_entero('y',y);
    }else if (x<=y){

        imprimir_entero('x',x);
        imprimir_entero('y',y);
        x=2;
        imprimir_entero('x',x);
        imprimir_entero('y',y);
    }

        imprimir_entero('x',x);
        imprimir_entero('y',y);


                 x=0;
                 y=0;

    printf("-------------------------------Ejercicio 1f-------------------------------");

      x=pedir_entero('x');
      y=pedir_entero('y');

    if (x>=y){

        imprimir_entero('x',x);
        imprimir_entero('y',y);

        x=0;

        imprimir_entero('x',x);
        imprimir_entero('y',y);

    }else if (x<=y){

        imprimir_entero('x',x);
        imprimir_entero('y',y);

        x=2;

        imprimir_entero('x',x);
        imprimir_entero('y',y);

    }

        imprimir_entero('x',x);
        imprimir_entero('y',y);


    return 0;
}
