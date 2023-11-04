#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

/*7. (Arreglos, Funci´on sumatoria). Hacer un programa en un archivo con nombre sumatoria.c
que contenga la funci´on
int sumatoria(int tam, int a[])
que recibe un tama˜no m´aximo de arreglo y un arreglo como argumento, y devuelve la suma
de sus elementos (del arreglo). En la funci´on main pedir los datos del arreglo al usuario
asumiendo un tama˜no constante previamente establecido (en tiempo de compilacilaci´on)*/


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

int sumatoria(int tam, int a[]){
int i = 0;
int sum = 0;
while (i!=tam)
{
  sum = sum+a[i];
  i=i+1;
}





}
int main(){
int s = 0;
int n_max = printf("Ingrese el tamaño maximo del array\n");
scanf("%d",&n_max);
int a[n_max];
pedir_arreglo(n_max,a);

imprimir_arreglo(n_max,a);

s = sumatoria(n_max,a);
printf("La sumatoria de los valores del array es: %d",s);


  return 0;
}


