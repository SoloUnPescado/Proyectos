#include <stdio.h>
#include <stdbool.h>

//----------------CONSIGNA----------------


/*b) Traducı a lenguaje C los programas que siguen a continuacion, agregando las instrucciones necesarias para que el usuario pueda ingresar los valores de las variables de entrada.
Luego, completa los estados:

[|σ0 : (x→ 5 ,y→ 4 ,z→ 8 ,m→ 0 ) |]
var x,y,z,m:Int;
if (x < y) →m := x
(x ≥ y) →m := y
fi

[|σ1 : (x→5 ,y→4 ,z→8 ,m→4 ) |]
if (m < z) →skip
(m ≥ z) →m := z
fi

[|σ2 : (x→5 ,y→4 ,z→8 ,m→4 ) |]

Volve a ejecutar nuevamente con otros estados iniciales. ¿Que hace este programa?
¿Cual es el valor final de la variable m?.

    Este programa cambia el valor de la variable m por el valor de m por el menor valor de las otras 3 variables
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



//----------------FUNCION PRINCIPAL----------------
    int main()
{
    
    int x=pedir_entero('x');
    int y=pedir_entero('y');
    int z=pedir_entero('z');
    int m=pedir_entero('m');


    if (x<y){

        m=x;
        
    }else {

        m=y;

    }
    
    imprimir_entero('x',x);
    imprimir_entero('y',y);
    imprimir_entero('z',z);
    imprimir_entero('m',m);

    if (m<z){

      

    }else{


        m=z;

    }


    imprimir_entero('x',x);
    imprimir_entero('y',y);
    imprimir_entero('z',z);
    imprimir_entero('m',m);
       
    return 0;
}
