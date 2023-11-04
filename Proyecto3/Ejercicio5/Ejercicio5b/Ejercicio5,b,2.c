#include<stdio.h>
#include<stdbool.h>

//----------------------------------CONSIGNA----------------------------------

/*----------------------------------------------------------------------------\ 
|    [|σ0: (x→ 5 ,i→ 0 ,res→False) |]                                         |
|        i := 2                                                               |
|        res := True                                                          |
|            do(i < x ∧ res) →                                                |
|                res := res ∧ (mod(x, i) != 0)                                |
|                i := i + 1                                                   |
|                [|σ01, σ11, σ21|]                                            |
|            od                                                               |
|                [|σ01: (x→5 ,i→3 ,res→True )    σ11: (x→5 ,i→4 ,res→True ),  |
|                luego de iter. 1                luego de iter. 2             |
|                                                                             |
|                σ21: (x→5 ,i→5 ,res→True ) |]:                               |
|                luego de iter. 3                                             |
|----------------------------------------------------------------------------*/

//----------------------------------RESOLUCION----------------------------------

//-----------------------------FUNCIONES AUXILIARES----------------------------------

bool pedir_booleano(char name){
    int a;
    printf("Ingrese un valor booleano para %c\n",name);
    scanf("%d",&a);

    return a;
}

void imprimir_booleano (char name,bool algo){

    if (algo==true)
    {
        printf("El valor de verdad de %c es Verdadero\n",name);
    } else{

        printf("El valor de verdad de %c es Falso\n",name);
    }

}

 int pedir_entero(char name){
        int x;
        printf("Ingrese un valor para la variable %c\n",name);
        scanf("%d",&x);
        return x;

    }
  
    void imprimir_entero(char name,int x){

    printf("El valor de la variable %c es %d\n",name,x);
    }

/*char* int_a_bol ( int a)
{
    if ( a == 1)
    {
        return "True";
    } else {
        return "False";
            }
}*/

//----------------------------FUNCION PRINCIPAL----------------------------------

int main()
{
        int x,i;
        bool res;

        x=pedir_entero('x');
        i=pedir_entero('i');
        res=pedir_booleano('r');

        i=2;
        res=true;

        while (i< x && res)
        {
            
            res= res &&((x%i) != 0);
            i=i+1; 

            imprimir_entero('x',x);
            imprimir_entero('i',i);
            imprimir_booleano('r',res);


        }
        


    return 0;
}
