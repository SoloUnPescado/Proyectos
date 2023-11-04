#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

/*4. (vocales) Crear un archivo vocales.c que contenga la funci´on:
bool es_vocal(char letra)
que dado el caracter letra devuelve true si es una vocal y false en caso contrario. En la
funci´on main se le debe solicitar al usuario que ingrese un caracter y luego se debe mostrar
un mensaje que indique si dicho caracter es una vocal o no seg´un el resultado de la funci´on
es_vocal(). Tener en cuenta vocales may´usculas y min´usculas.
NOTA: Definir una funci´on que pida un caracter an´aloga a pedir_entero() pero para el
tipo char.
NOTA: Recordar usar %c en vez de %d en el uso de scanf() y printf() para obtener /
mostrar caracteres al usuario.
*/


char pedir_char(char name){
        char x;
        printf("Ingrese un valor para la variable %c\n",name);
        scanf("%d",&x);
        return x;
}


bool es_vocal(char letra){

    if (letra ='a'|| letra ='A'||letra ='e'||letra='E'||letra = 'i' ||letra ='I'|| letra ='o'||letra ='O'||letra='u'||letra = 'U')
    {
        return true;

    }else {

        return false;

    }
    
    


}


int main()
{
    char n = pedir_char(n);

    if (es_vocal(n))
    {
        printf("BRAVO MIM BROTHER ES VOCAL");
    } else{

        printf("DEFRAUDASTE BROTHER");
    }
    

    return 0;
}
