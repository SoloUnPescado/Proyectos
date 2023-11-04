#include<stdio.h>
#include<stdbool.h>
#include<assert.h>


/*9. (Procedimiento intercambio). Hacer un programa en el archivo nuevo intercambio_arreglos.c
que contenga la siguiente funcion:
void intercambiar(int tam, int a[], int i, int j)

que recibe un tamano maximo de arreglo, un arreglo y dos posiciones como argumento, e
intercambia los elementos del arreglo en dichas posiciones. En la funcion main pedirle al
usuario que ingrese los elementos del arreglo y las posiciones, chequear que las posiciones
esten en el rango correcto y luego imprimir en pantalla el arreglo modificado*/


int pedir_entero(char* name){
        int x;
        printf("Ingrese un valor para la variable %s\n",name);
        scanf("%d",&x);
        return x;

}

void pedir_arreglo(int n_max, int a[]){

int i = 0;

while (i!=n_max)
{
  printf("Ingrese un valor para la posicion %d del array\n",i);
  scanf("%d",&a[i]);
  i=i+1;

}

}


void imprimir_arreglo(int n_max, int a[]){

int i=0;

while (i!=n_max)
{

  printf("EL valor en la posicion %d del array es: %d\n",i,a[i]);
  i=i+1;

}

}


void intercambiar(int n_max, int a[], int i, int j){

printf("Ingese las posiciones del arreglo que quiera intercambiar(menores al maximo del array)\n");

i = pedir_entero("primPos");
assert(0<=i && i<n_max);

j = pedir_entero("segPos");
assert(0<=j && j<n_max);

int inter = 0;

inter = a[i];
a[i]=a[j];
a[j]=inter;


}


int main(){

  int n_max = printf("Ingrese el tamaño maximo del array\n");
  scanf("%d",&n_max);

  int a[n_max];

  pedir_arreglo(n_max,a);

  int primPos = 0;
  int segPos=0;

  intercambiar(n_max,a,primPos,segPos);

  imprimir_arreglo(n_max,a);

  return 0;
}