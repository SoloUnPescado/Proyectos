#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

/*
8. (Multiplos) . Hacer un programa en un archivo multiplos.c que contenga las siguientes
funciones:
bool todos_pares(int tam, int a[])
bool existe_multiplo(int m, int tam, int a[])
La primera recibe un tamano maximo de arreglo y un arreglo como argumento devolviendo
true cuando todos los elementos del arreglo a[] son numeros pares y false en caso
contrario. La segunda determina si hay en el arreglo a[] algun elemento que es multiplo
de m. En la funcion main se debe pedir al usuario los elementos del arreglo (asumiendo un
tamano constante) y luego permitirle elegir que funcion ejecutar. En caso que se elija la
funcion existe_multiplo() se le debe pedir al usuario un valor para m.
*/


void pedir_arreglo(int n_max, int a[]){

int i = 0;

while (i!=n_max)
{
  printf("Ingrese un valor para la posicion %d del array\n",i);
  scanf("%d",&a[i]);
  i=i+1;

}

}

bool existe_multiplo(int m, int n_max, int a[]){

     int i=0;
    bool t = false;

    while(i!=n_max){

        if (m%a[i]==0){
        
            t=true;

        }   else{
  
            }

      i= i+1;  

    }

    return t;


}


bool todos_pares(int tam, int a[]){

    int i=0;
    bool t = true;

    while(i!=tam){

        if (2%a[i]==0){
        
        }   else{

                t=false;
            }

      i= i+1;  

    }

    return t;
}


int main(){
    int n;

    printf("Ingrese el valor maximo del arreglo\n");
    scanf(" %d", &n);

    assert (n>0);
    
    int a[n];
    pedir_arreglo(n, a);

    int t;
    t=todos_pares(n, a);
    
    printf(" %d\n",t);

    int m=0;

    printf("Ingrese un valor para verificar si hay algun multiplo de el en el array\n");
    scanf("%d",&m);

    int s = existe_multiplo(m,n,a);

    printf("%d",s);
    
    return 0;
}