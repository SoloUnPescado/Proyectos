#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<limits.h>

#define N 4

/*10. (Mınimos). Hacer un programa en un archivo con nombre minimos.c que contenga las
siguientes funciones:
int minimo_pares(int tam, int a[])
int minimo_impares(int tam, int a[])
Estas funciones reciben un tama˜no m´aximo de arreglo y un arreglo como argumentos,
devolviendo el elemento par m´as peque˜no del arreglo y el elemento impar m´as peque˜no del
arreglo respectivamente.
a) En la funci´on main se debe pedir al usuario los elementos del arreglo (asumiendo un
tama˜no constante) y luego mostrar por pantalla:
El resultado de minimo_pares(), para el arreglo ingresado
El resultado de minimo_impares(), de nuevo, para el arreglo ingresado
El elemento m´ınimo del arreglo ingresado (utilizando el resultado de ambas funciones
para calcularlo).
Pueden definir alguna funci´on auxiliar si les resulta necesario.
NOTA: Investigar las constantes definidas en la librer´ıa <limits.h> para definir el
neutro de la operaci´on m´ınimo
b) (Punto estrella) Hacer una segunda versi´on del programa en el archivo minimos_estrella.c
y usar las funciones del ejercicio 8 en la fucni´on main para que en caso de no haber
elementos pares no se muestre el resultado de minimo_pares() y en caso de no haber
impares no se muestre el resultado de minimo_impares()*/


int minimo_seco(int par_max, int im_max){
 
 int min =0;

  if (par_max<im_max)
  {
    min=par_max;

  }else{

    min=im_max;
  }
  
  
  return min;
}

int minimo_pares(int n_max, int a[]){
  int i = 0;
  int min =INT_MAX;

  while (i!=n_max)
  {
    if (a[i]%2==0 && a[i]<min)
    {
      min = a[i];
      
    } 
      i=i+1;

  }
  
  return min;
}


int minimo_impares(int n_max, int a[]){
  int i = 0;
  int min =INT_MAX;

  while (i!=n_max)
  {
    if (a[i]%2!=0 && a[i]<min)
    {
      min = a[i];
      
    } 
      i=i+1;

  }
  
  return min;
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


int main(){

  

  int a[N];

  pedir_arreglo(N,a);

  imprimir_arreglo(N,a);

  printf("El valor minimo par del array es: %d\n",minimo_pares(N,a));
  printf("El valor minimo impar del array es: %d\n",minimo_impares(N,a));
  printf("El menor valor del array es: %d\n",minimo_seco(minimo_pares(N,a),minimo_impares(N,a)));

  return 0;
}