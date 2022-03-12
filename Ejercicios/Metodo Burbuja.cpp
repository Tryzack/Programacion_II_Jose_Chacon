#include <stdio.h>

int numeros[10], n, aux;
void pregunta(), respuesta();

int main(){

    pregunta();

    for(int i=0; i<10; i++){

        for(int j=0; j<10; j++){

            if(numeros[j]>numeros[j+1]){

                aux=numeros[j+1];
                numeros[j+1]=numeros[j];
                numeros[j]=aux;

            }
        }
    }

    respuesta();
    
    return 0;

}

void pregunta(){
    printf("En orden se le preguntaran 10 numeros enteros al azar y se ordenaran de mayor a menor\n ");

    for(int i=0; i<10; i++){
        n=i+1;
        printf("Ingrese el numero %d\n", n);
        scanf("%d",&numeros[i]);
    }
}

void respuesta(){

    for(int i=0; i<10; i++){

        n=i+1;
        printf("El nuevo valor del arreglo en la posicion %d es de %d\n ", n, numeros[i]);

    }

}
