#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#define N 5

/*14. (Arreglo de asociaciones) En asoc.c programar la funci´on
bool asoc_existe(int tam, struct asoc a[], clave_t c)
Donde la estructura struct asoc y los tipos clave_t, valor_t se definen como:
typedef char clave_t;
typedef int valor_t;
struct asoc {
clave_t clave
valor_t valor
};
El llamado a asoc_existe(tam, a, c) debe indicar si la clave c se encuentra en el arreglo
de asociaciones a[]. En la funci´on main pedir al usuario los datos del arreglo (asumiendo un
tama˜no constante) y luego pedir una clave. Finalmente usar la funci´on asoc_existe para
verificar la existencia de la clave ingresada y mostrar por pantalla un mensaje indicando si la
clave existe o no en el arreglo de asociaciones.
*/


typedef char clave_t;
typedef int valor_t;

struct asoc {
clave_t clave;
valor_t valor;

};


bool asoc_existe(int n_max, struct asoc a[], clave_t c){

    bool res = false;
    int i = 0;


    while (i!=n_max && res==false)
    {
        if (c==a[i].clave)
        {
            res = true;
            printf("Si exite un valor con la clave %c, ese valor se encuentra en la posicion %d y es: %d\n",c,i,(a[i].valor));
        }
        

        i=i+1;
    }
    
        if (res==false)
        {
            printf("No existe un valor con dicha clave en el array\n");
        }
        
        return res;

}



void pedir_arreglo(int n_max, struct asoc a[]){

int i = 0;

while (i!=n_max)
{
  printf("Ingrese un valor para la posicion %d del array\n",i);
  scanf("%d",&a[i].valor);

  printf("Ingese una clave alfabetica para dicho valor\n");
  scanf(" %c",&a[i].clave);

  i=i+1;

}

}


void imprimir_arreglo(int n_max, struct asoc a[]){

int i=0;

while (i!=n_max)
{
    printf("EL valor en la posicion %d del array es: %d\n",i,a[i].valor);
    printf("Y su calve asignada es: %c\n",a[i].clave);

    i=i+1;


}



}


int main(){


    struct asoc a[N];
    pedir_arreglo(N,a);

    imprimir_arreglo(N,a);

    int t = 0;
    printf("Ingrese una clave para verificar si tiene un valor asignado\n");
    scanf("%d",&t);

    asoc_existe(N,a,t);

    return 0;
}