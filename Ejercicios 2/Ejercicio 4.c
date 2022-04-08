#include <stdio.h>
#include <string.h>


int i, n;
float medallasmax=0;

struct atletas{

    char nombre[20];
    char pais[20];
    int medallas;

}*atleta;

int main(){

    printf("Cuantos atletas seran evaluados?\n");
    scanf("%d", &n);
    atleta = malloc(n * sizeof(*atleta));

    for(int m=0; m<n; m++){
        printf("\nIngrese el nombre del atleta %d \n", m+1);
        scanf("%s", &atleta[m].nombre);

        printf("Ingrese el pais del atleta %d\n", m+1);
        scanf("%s", &atleta[m].pais);
        
        printf("Ingrese el numero de medallas del atleta %d\n", m+1);
        scanf("%d", &atleta[m].medallas);
        
        if(medallasmax<atleta[m].medallas){
            medallasmax=atleta[m].medallas;
            i=m;
        }
    }
    printf("\nLos datos del atleta con mayor cantidad de medallas son los siguientes:\n");
    printf("Nombre: %s\n", atleta[i].nombre);
    printf("Pais: %s\n", atleta[i].pais);
    printf("Medallas: %d\n", atleta[i].medallas);
    
return 0;

}
