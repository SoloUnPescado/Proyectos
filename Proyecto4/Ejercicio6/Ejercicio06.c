#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

/*6. (Arreglos, entrada-salida) Escribir un programa que solicite el ingreso de un arreglo de enteros
int a[] y luego imprime por pantalla. El programa debe utilizar dos nuevas funciones adem´as
de la funci´on main:
una que dado un tama˜no m´aximo de arreglo y el arreglo, solicita los valores para el
arreglo y los devuelve, guard´andolos en el mismo arreglo int a[]; funci´on con prototipo
(tambi´en conocido como signatura o firma):
void pedir_arreglo(int n_max, int a[])
otra que imprime cada uno de los valores del arreglo int a[], de prototipo:
void imprimir_arreglo(int n_max, int a[])*/


 void imprimir_entero(char name,int x){

    printf("El valor de la variable %c es %d\n",name,x);
    }

int pedir_entero(char name){
        int x;
        printf("Ingrese un valor para la variable %c\n",name);
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


int main(){

int n_max = printf("Ingrese el tamaño maximo del array\n");
scanf("%d",&n_max);
int a[n_max];
pedir_arreglo(n_max,a);

imprimir_arreglo(n_max,a);

  return 0;
}