#include <stdio.h>
#include <stdlib.h>

int *numeros, n, aux, min, x;
void pregunta(), respuesta();

int main(){

    pregunta();

    for(int i=0; i<x; i++){

        min = i;
        for (int j=i+1; j<=x; j++){

            if(numeros[j]<numeros[min]){
                min=j;
                
            }
        }

    aux=numeros[i];
    numeros[i]=numeros[min];
    numeros[min]=aux;

    }

    respuesta();
    return 0;
}

void pregunta(){
    
    printf("Bienvenido a la ordenadora de numeros\n");
    printf("Por favor indique la cantidad de numeros que va a colocar, posteriormente se le preguntara cuanto vale cada uno\n ");
    scanf("%d", &x);

    numeros = (int *) calloc(x, sizeof(int));

    for(int i=0; i<x; i++){
        n=i+1;
        printf("Ingrese el numero %d\n", n);
        scanf("%d",&numeros[i]);
    }

    x--;
}

void respuesta(){

    for(int i=0; i<x+1; i++){

        n=i+1;
        printf("El nuevo valor del arreglo en la posicion %d es de %d\n ", n, numeros[i]);

    }

}
