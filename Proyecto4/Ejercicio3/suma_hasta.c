#include<stdio.h>
#include<stdbool.h>
#include<assert.h>


/*3. (Funci´on suma hasta) Crear un archivo llamado suma hasta.c, que contenga la funci´on
int suma_hasta(int n)
que toma un n´umero entero n como argumento, y devuelve la suma de los primeros n
naturales. En la funci´on main pedir al usuario que ingrese el entero n, si es negativo imprimir
un mensaje de error, y si es no negativo imprimir el resultado devuelto por suma_hasta.
Ayuda: La funci´on puede hacer un ciclo o directamente usar la f´ormula de Gauss.*/



int pedir_entero(char name){
        int x;
        printf("Ingrese un valor para la variable %c\n",name);
        scanf("%d",&x);
        return x;
}


int suma_hasta(int n){



 return ((n*(n+1))/2);
}

int main()
{
    int n =pedir_entero('n');

    assert(n>0);

    printf("La suma de los primeros %d numeros es: %d",n,suma_hasta(n));


    return 0;
}
