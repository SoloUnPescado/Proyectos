#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#define N 5

/*11. (Funci´on prim iguales) Programar en el archivo prim_iguales.c la funci´on
int prim_iguales(int tam, int a[])
que siendo tam el tama˜no del arreglo a[] devuelve la longitud del tramo inicial m´as largo
cuyos elementos son todos iguales (parecida a la funci´on primIguales del Proyecto 1).
a) En la funci´on main se le debe pedir al usuario los elementos del arreglo asumiendo un
tama˜no constante previamente establecido (en tiempo de compilaci´on) y luego mostrar
el resultado de la funci´on prim_iguales por pantalla
b) (Punto Estrella) Mostrar por pantalla el mayor tramo inicial del arreglo a[] que tiene
a todos sus elementos iguales.*/


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


int prim_iguales(int n_max, int a[]){

    int i = 0;
    int eq =a[i];
    int j = 0;

    while (i!=n_max)
    {
        if ((a[i+1]==eq))
        {
            eq = a[i];
            j = j+1;
        }

      i=i+1;

    }
    printf("El tramo inicial del array es:\n");
    imprimir_arreglo((j+1),a);

  return (j+1);

    
}

int main(){

  int a[N];

  pedir_arreglo(N,a);

  imprimir_arreglo(N,a);

  printf("El primer tramo mas largo del mismo numero es: %d\n",prim_iguales(N,a));

  
  return 0;
}