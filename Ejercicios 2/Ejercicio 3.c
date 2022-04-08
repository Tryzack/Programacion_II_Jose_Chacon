#include <stdio.h>
#include <string.h>


int i, n;
float sueldomax=0;

struct empleados{

    char nombre[20];
    float sueldo;

}*empleado;

int main(){

    printf("Cuantos empleados seran evaluados?\n");
    scanf("%d", &n);
    empleado = malloc(n * sizeof(*empleado));

    for(int m=0; m<n; m++){

        printf("\nIngrese el nombre del empleado %d \n", m+1);
        scanf("%s", &empleado[m].nombre);

        printf("Ingrese el sueldo del empleado %d\n", m+1);
        scanf("%f", &empleado[m].sueldo);

        if(sueldomax<empleado[m].sueldo){
           sueldomax=empleado[m].sueldo;
            i=m;
        }
    }

    printf("\nLos datos del empleado con mayor sueldo son los siguientes:\n");
    printf("Nombre: %s\n", empleado[i].nombre);
    printf("Sueldo: %f\n", empleado[i].sueldo);

return 0;

}
