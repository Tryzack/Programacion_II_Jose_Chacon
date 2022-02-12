//Resolver el problema propuesto

#include <stdio.h>

int sum(int n), n;

int main(){
    printf("Ingrese el numero el cual se hara una sumatoria de los numeros anteriores");
    printf("\n Recuerde que los numeros tienen que ser positivos\n");
    scanf("%d", &n);
    sum(n);
    printf("\nLa sumatoria de los numeros es %d", sum(n));
}

int sum(int n){
    if(n==0){
        return 0;
    } else if(n==1){
        return 1;
    } else if(n>1){
        n = n+sum(n-1);
        return n;
    } else if (n<0){
        printf("\nError, recuerda que el numero tiene que ser positivo\n");
        return n;
    }
}
