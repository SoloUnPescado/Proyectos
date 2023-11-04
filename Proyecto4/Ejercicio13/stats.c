#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<limits.h>

/*13. (Funci´on stats). Hacer un programa en un archivo nuevo stats.c, que calcula el m´ınimo, el
m´aximo, y el promedio de un arreglo no vac´ıo de n´umeros flotantes (tipo float). La funci´on
tiene el siguiente prototipo:
struct datos_t stats(int tam, float a[])
donde la estructura datos_t se define como sigue:
struct datos_t {
float maximo;
float minimo;
float promedio;
};
La funci´on pedida debe implementarse con un ´unico ciclo. En la funci´on main pedir al usuario
los datos del arreglo e imprimir en pantalla los tres valores devueltos por la funci´on.*/


struct datos_t {
float maximo;
float minimo;
float promedio;
};


struct datos_t stats(int n_max, float a[]){

    int i=0;
    struct  datos_t x;
    x.maximo= INT_MIN;
    x.minimo= INT_MAX;
    x.promedio=0;
   
    while (i!=n_max)
    {
        if (a[i]<x.minimo)
        {
            x.minimo = a[i];
      
        } else if (x.maximo<a[i])
            {
                x.maximo = a[i];
            }
    
        x.promedio = x.promedio + a[i];
        i=i+1;

    }
    
        x.promedio = x.promedio/n_max;
        
    return x;
}


void pedir_arreglo(int n_max, float a[]){

int i = 0;

while (i!=n_max)
{
  printf("Ingrese un valor para la posicion %d del array\n",i);
  scanf("%e",&a[i]);
  i=i+1;

}

}


void imprimir_arreglo(int n_max, float a[]){

int i=0;

while (i!=n_max)
{
  printf("EL valor en la posicion %d del array es: %f\n",i,a[i]);
  i=i+1;


}



}


int main(){

    int n_max = printf("Ingrese el tamaño maximo del array\n");
    scanf("%d",&n_max);

    float a[n_max];
    pedir_arreglo(n_max,a);

    imprimir_arreglo(n_max,a);

   struct datos_t x;
   x = stats(n_max,a);
   
    printf("El valor maximo del array es: %f\n",x.maximo);
    printf("El valor minimo del array es: %f\n",x.minimo);
    printf("El promedio del array es: %f\n",x.promedio);

    return 0;
}