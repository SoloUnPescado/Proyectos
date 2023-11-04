#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<limits.h>

/*12. (Funci´on cuantos). Hacer un programa en un archivo nuevo cuantos.c que calcula cu´antos
elementos menores, iguales y mayores a un n´umero hay en un arreglo. La funci´on tiene el
siguiente prototipo:
struct comp_t cuantos(int tam, int a[], int elem)
donde la estructura comp_t se define como sigue:
struct comp_t {
int menores;
int iguales;
int mayores;
};
4
La funci´on toma un tama˜no m´aximo de arreglo, el arreglo y un entero, y devuelve una
estructura con tres enteros que respectivamente indican cu´antos elementos menores, iguales
o mayores al argumento hay en el arreglo. La funci´on cuantos debe contener un ´unico ciclo.
*/

struct comp_t {

    int menores;
    int iguales;
    int mayores;

};


struct comp_t cuantos(int n_max, int a[], int elem){

    struct comp_t x;
        x.menores=0;
        x.iguales=0;
        x.mayores=0;
    
    
    int i = 0;
  

    while (i!=n_max)
    {
        if (elem<a[i])
        {
           
            x.mayores = x.mayores+1;
        

        }else if (elem==a[i])
                    {
                   
                        x.iguales = x.iguales+1;

                     } else if (a[i]<elem)
                {
               
                    x.menores=x.menores+1;
                  

                }
    
      i=i+1;

  }
  
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

    int n =0;
    printf("Ingrese un valor para verificar los valores mayores,menores e iguales a este en el array\n");
    scanf("%d",&n);


    struct comp_t b; 
    b = cuantos(n_max,a,n);
   
    printf("En el array hay %d valores menores a %d\n",b.menores,n);
    printf("En el array hay %d valores mayores a %d\n",b.mayores,n);
    printf("En el array hay %d valores iguales a %d\n",b.iguales,n);

    return 0;
}