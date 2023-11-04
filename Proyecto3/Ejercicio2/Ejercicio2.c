#include <stdio.h>
#include <stdbool.h>


//----------------CONSIGNA----------------

/*  Debugging Utiliza GDB o printf como ayuda y encontra valores para las variables que
    forman el estado:

    (x →4 , y→(-4) , z→8 , b→True , w→False )

    De manera que las siguientes expresiones tengan el valor indicado:
---------------------------------------    
|Expresion                      |Valor|     
|-------------------------------|-----|
|x % 4 == 0                     |True |          
|x + y == 0 && y - x == (-1) * z|True |
|not b && w                     |False|
---------------------------------------

Podes cambiar el programa hecho en el ejercicio anterior, agregando las nuevas expresiones
booleanas.
*/


//Funciones Auxiliares
 char* verifica_valor ( int algo){

   if (algo == 0)
   {
    return "False";
   } else{

    return "True";
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
//Funcion principal

int main()
{

//Instanciacion de variables (Antes del ejercicio 6,c estaba echo con printfs y scanfs)

    int x=pedir_entero('x');; 
    int y=pedir_entero('y'); ; 
    int z=pedir_entero('z'); ; 
    bool b=pedir_booleano('b'); ; 
    bool w=pedir_booleano('w'); ; 
       
       
    


    //Usando GDB en ambos breakpoint podemos ver el valor de cada variable


     printf("El resultado de %d mod 4 es = %s\n",x,verifica_valor(x%4));
     printf("El resultado de %d + %d == 0 && %d - %d == (-1) * %d es = %s\n",x,y,y,x,z,verifica_valor(x + y == 0 && y - x == (-1) * z));
     printf("El resultado de not %d && %d es = %s\n",b,w, verifica_valor(!b && w));

    
     
    imprimir_entero('x',x);
    imprimir_entero('y',y);
    imprimir_entero('z',z);
    imprimir_booleano('b',b);
    imprimir_booleano('w',w);

    //Usando GDB en ambos breakpoint podemos ver el valor de cada variable

    
    return 0;
}

/*los valores de las variables que cumplen el valor indicado de cada expresion son:
x = 4
y = (-4)
z = 8
b = True o 1
w = False o 0
*/
