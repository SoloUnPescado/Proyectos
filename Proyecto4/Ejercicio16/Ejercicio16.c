#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<limits.h>

typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;



/*----------------------------------Funcion de promedio de peso(como los valores del array son del tipo persona_t, podemos acceder a toda la informacion de cada uno de ellos)----------------------------------*/
float peso_promedio(unsigned int longitud, persona_t arr[]){

    int i =0;
    int sum =0;
    int prom =0;
    while (i!=(int)longitud)
    {
    
        sum = sum + arr[i].peso;
        i=i+1;
    }
    
    prom = sum/longitud;

    return prom;
}


/*----------------------------------Funcion de mayor edad----------------------------------*/
persona_t persona_de_mayor_edad(unsigned int longitud, persona_t arr[]){

    int i=0;
    persona_t maxedad;
     maxedad.edad = 0;

    while (i!=(int)longitud)
    {
        if (maxedad.edad<arr[i].edad)
    {
      maxedad = arr[i];
      
    } 

        i=i+1;
    }
    
    return maxedad;
}


/*----------------------------------Funcion de menor altura----------------------------------*/
persona_t persona_de_menor_altura(unsigned int longitud, persona_t arr[]){

    int i=0;
    persona_t min_altura;
    min_altura.altura = INT_MAX;

    while (i!=(int)longitud)
    {

    
     if (arr[i].altura<min_altura.altura)
    {
      min_altura = arr[i];
      
    } 

    i=i+1;

    }

     return min_altura;
}


/*----------------------------------El main nesta predefinido en la consigna----------------------------------*/

int main(void) {

persona_t p1 = {.nombre="Paola", .edad=21, .altura=1.85, .peso=75};
persona_t p2 = {.nombre="Luis", .edad=54, .altura=1.75, .peso=69};
persona_t p3 = {.nombre="Julio", .edad=40, .altura=1.70, .peso=80};

unsigned int longitud = 3;
persona_t arr[] = {p1, p2, p3};

printf("El peso promedio es %f\n", peso_promedio(longitud, arr));

persona_t p = persona_de_mayor_edad(longitud, arr);
printf("El nombre de la persona con mayor edad es %s\n", p.nombre);

p = persona_de_menor_altura(longitud, arr);
printf("El nombre de la persona con menor altura es %s\n", p.nombre);

return 0;
}
