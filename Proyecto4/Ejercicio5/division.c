#include<stdio.h>
#include<stdbool.h>
#include<assert.h>


/*5. (Algoritmo de la divisi´on) Crear un archivo llamado division.c que contenga la siguiente
funci´on:
struct div_t division(int x, int y){
...
}
donde la estructura div_t se define como
struct div_t {
int cociente;
int resto;
};
Esta funci´on recibe dos enteros no negativos (divisor no nulo) y devuelve el cociente junto
con el resto de la divisi´on entera. En la funci´on main pedir al usuario los dos n´umeros enteros,
imprimir un mensaje de error si el divisor es cero, o imprimir tanto el cociente como el resto
en otro caso*/



struct div_t  {
  int cociente;
  int resto;
  };


int pedir_entero(char name){
        int x;
        printf("Ingrese un valor para la variable %c\n",name);
        scanf("%d",&x);
        return x;

    }


struct div_t division(int m, int n){

  struct div_t d;
  d.resto=0;
  d.cociente=0;

  while(m-n>=0){

    m=m-n;
    d.cociente = d.cociente + 1;

  }
   d.resto = m;
  return d;
}


int main () {

  int dividendo = pedir_entero('x');
  int divisor = pedir_entero('y');
  

  assert(dividendo>0 && divisor>=0);

  struct div_t t = division(dividendo,divisor);

  printf("EL resto de dividir %d por %d es: %d\nY el cociente de dicha division es: %d\n",dividendo,divisor,t.resto,t.cociente);

  return 0;
}