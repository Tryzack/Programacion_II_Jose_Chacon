#include <stdio.h>
#include <string.h>

int i;
float promediomax=0;

struct alumno{

    char nombre[20];
    int edad;
    float promedio;

}alumno[3];

int main(){
    for(int m=0; m<3; m++){

        printf("Ingrese el nombre del alumno %d \n", m+1);
        scanf("%s", &alumno[m].nombre);

        printf("Ingrese la edad del alumno %d\n", m+1);
        scanf("%d", &alumno[m].edad);

        printf("Ingrese el promedio del alumno %d\n", m+1);
        scanf("%f", &alumno[m].promedio);

        if(promediomax<alumno[m].promedio){

            promediomax=alumno[m].promedio;
            i=m;

        }
    }
    
    printf("Los datos del alumno con mayor promedio son los siguientes:\n");
    printf("Nombre: %s\n", alumno[i].nombre);
    printf("Edad: %d\n", alumno[i].edad);
    printf("Promedio: %f\n", alumno[i].promedio);

return 0;

}
