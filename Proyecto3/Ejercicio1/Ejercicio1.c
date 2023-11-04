#include <stdio.h>
#include <stdbool.h>


//----------------CONSIGNA----------------

/*1. Entrada/Salida Hace un programa en C, que solicite el ingreso de los valores de las variables
x,y,z, e imprima el resultado de las siguiente expresiones. Completa los resultados de la
tablas para los dos estados dados.
-------------------------------------------------------------------
|Expresion               |(x→7, y→3, z→5)    | (x→1, y→10, z→8)   |
-------------------------|-------------------|--------------------|
|x + y + 1               |        11         |         12         |
|z * z + y * 45 - 15 * x |        85         |         499        |
|y - 2 == (x * 3 + 1) % 5|        False      |         False      |
|y / 2 * x               |        7          |         5          |
|y < x * z               |        False      |         True       |
-------------------------------------------------------------------  
¿En la ultima expresion, que tipo tiene el resultado en lenguaje “C”?*/


//----------------VARIABLES AUXILIARES----------------


bool pedir_booleano(char name){
    int a;
    printf("Ingrese un valor booleano para %c\n",name);
    scanf("%d",&a);

    return a;
}

void imprimir_booleano (char name,bool algo){

    if (algo==true)
    {
        printf("El valor de verdad de %c es Verdadero\n",name);
    } else{

        printf("El valor de verdad de %c es Falso\n",name);
    }
}
 int pedir_entero(char name){
        int x;
        printf("Ingrese un valor para la variable %c\n",name);
        scanf("%d",&x);
        return x;

    }
  
    void imprimir_entero(char name,int x){

    printf("El valor de la variable %c es %d\n",name,x);
    }

void ejercicio1(){
    
    int x, y, z;
    bool c,d;

  x=pedir_entero('x');
  y=pedir_entero('y');
  z=pedir_entero('z');
  

   /* 
-----------------------EJERCICIO 1 ANTES DE REMPLAZAR LOS PRINTF POR FUNCIONES AUXILIARES-----------------------

    printf("Ingrese un valor para x\n");
    scanf("%d", &x);

    printf("Ingrese un valor para y\n");
    scanf("%d", &y);

    printf("Ingrese un valor para z\n");
    scanf("%d", &z);

----------------------------------------------------------------------------------------------------------------*/

    if ((y - 2 == (x * 3 + 1) % 5) == 0){
     c = true;
    } else {
      c = false;
    }
    if ((y < x * z) == 0){
     d = true;
    } else {
      d = false;
    }


    printf ("El resultado de hacer x+y+1 = %d\n", (x+y+1));
    printf ("El resultado de hacer z*z+y*45-15*x = %d\n", ((z * z) + (y * 45) - (15 * x)));
    printf ("El resultado de hacer y - 2 == (x * 3 + 1) mod 5 = %d\n",c);
    printf ("El resultado de hacer y / 2 * x = %d\n", (y / 2 * x));
    printf ("El resultado de hacer y < x * z = %d\n",d);



}


//----------------FUNCION PRINCIPAL----------------

    int main (){

    ejercicio1();
  

    printf("En la ultima expresion el resultado deberia tener tipo bool, pero como en C, los bool no estan implementados, este los expresa como int, siendo 0 = False y 1 siendo True\n");

    return 0;
}




