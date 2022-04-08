#include <stdio.h>
#include <string.h>

struct corredores{

    char nombre[30];
    int edad;
    char sexo[10];
    char club[30];
    char categoria[20];

}corredor;

int main(){

        printf("Ingrese el nombre del corredor\n");
        scanf("%s", &corredor.nombre);

        printf("Ingrese la edad del corredor \n");
        scanf("%d", &corredor.edad);
        
        printf("Ingrese el sexo del corredor\n");
        scanf("%s", &corredor.sexo);
        
        printf("Ingrese el club del corredor\n");
        scanf("%s", &corredor.club);

        if(corredor.edad<=18){

            strcpy(corredor.categoria, "Juvenil");

        } else if (corredor.edad<=40){

            strcpy(corredor.categoria, "Senior");

        } else {

            strcpy(corredor.categoria, "Veterano");

        }

    printf("Los datos del corredor son los siguientes:\n");
    printf("Nombre: %s \n", corredor.nombre);
    printf("Edad: %d \n", corredor.edad);
    printf("Sexo: %s \n", corredor.sexo);
    printf("Club: %s \n", corredor.club);
    printf("Categoria: %s \n", corredor.categoria);

return 0;

}
