#include<stdio.h>
#include<stdbool.h>
#include<assert.h>


/*15. (Funci´on nesimo primo) En un archivo nuevo primo.c hacer una funci´on
int nesimo_primo(int N)
que devuelve el n-´esimo primo.
a) En la funci´on main pedir al usuario que ingrese el entero n, si es negativo imprimir un
mensaje de error, y si es no negativo imprimir el resultado devuelto por nesimo_primo.
b) Modificar la funci´on main, para que al ingresar un valor negativo, solicite un nuevo
valor hasta que se ingrese un n no negativo.
*/


bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    int i = 2;
    while (i * i <= numero) {
        if (numero % i == 0) {
            return false;
        }
        i++;
    }

    return true;
}

int nesimoPrimo(int n) {
    if (n <= 0) {
        return -1; 
    }

    int contador = 0;
    int numero = 2;

    while (contador < n) {
        if (esPrimo(numero)) {
            contador++;
        }
        numero++;
    }

    return numero - 1; 
}

int corroborar_n(int n){

    if (n<=0)
    {
        while (n<=0)
        {
            printf("El valor ingresado es incorrecto, por favor ingrese otro\n");
            scanf("%d",&n);
        }
        
    }else{

        printf("El valor ingresado es correcto\n");
    }
    
    return n;
}


int main(){

    int n =0;
    printf("Ingrese un valor para devolver el n'esimo primo\n");
    scanf("%d",&n);

    n=corroborar_n(n);
   
   int a = nesimoPrimo(n);

   printf("El %d'esimo numero primo es: %d",n,a);
    return 0;
}