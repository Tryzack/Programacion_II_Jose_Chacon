#include <stdio.h>
#include <math.h>

int n, i;
float a, b, c, d;
void calculo1(float xx, float x, float constante);
void calculo2(float r);
void calculo3(float xo, float vo, float t, float a);
int pregunta(int i);

int main(){

    printf("=========================\n");
    printf("Evaluativo Jose Chacon\n");
    printf("C.I.:30.310.209\n");
    printf("=========================\n");

    do{

        printf("\nEscoja una de las siguientes opciones\n");
        printf("(1) Calculadora raiz de polinomio (grado 2)\n");
        printf("(2) Calculo del volumen de una esfera\n");
        printf("(3) Calculo del desplazamiento de un movil (MRUV)\n");
        printf("(4) Salir del programa\n");
        scanf("%d", &n);
        switch(n){
            case 1:

                printf("\nBienvenido a la calculadora de un polinomio de segundo grado\nRecordamos al usuario que un polinomio de segundo grado viene dado por la forma:\nAx^2 + Bx + C = 0 \n");
                printf("\n\nIntroduzca el valor de A\n");
                scanf("%f", &a);
                printf("Introduzca el valor de B\n");
                scanf("%f", &b);
                printf("Introduzca el valor de C\n");
                scanf("%f", &c);
                calculo1(a, b, c);
                i = pregunta(i);

            break;

            case 2:

                printf("\nBienvenido a la calculadora del volumen de una esfera\nPara calcular el valor del volumen de una esfera se necesita el radio de la misma\nRecuerda que el radio de una esfera no puede ser negativo ni igual a 0\n\nDicho lo anterior, ingrese el valor del radio\n");
                scanf("%f", &a);
                calculo2(a);
                i = pregunta(i);

            break;

            case 3:

                printf("\nBienvenido a la calculadora del desplazamiento de un movil\nPara calcular el desplazamiento final son necesarias varias variables\n");
                printf("Introduzca el valor del desplazamiento inicial\n");
                scanf("%f", &a);
                printf("Introdzca el valor de la velocidad inicial\n");
                scanf("%f", &b);
                printf("Introduzca el tiempo del desplazamiento\n");
                scanf("%f", &c);
                printf("Introduzca la aceleracion del movil\n");
                scanf("%f", &d);
                calculo3(a,b,c,d);
                i = pregunta(i);
                
            break;

            case 4:
            i=0;
            break;

            default:
            printf("\n\nEl valor seleccionado es incorrecto\nPor favor vuelva a intentarlo\n\n");
            i=1;
            break;

        }
    } while(i==1);
    
    return 0;
}

void calculo1(float xx, float x, float constante){

    float raiz_i = pow(x,2)-4*xx*constante;
    float x1, x2;
    float denominador=2*xx;

    if (raiz_i<0){
        printf("El resultado de la raiz es complejo\n");

    } else {

        x1 = (-x+raiz_i)/denominador;
        x2 = (-x-raiz_i)/denominador;
        printf("Las raices del polinomio de la forma %fx^2 + %fx + %f = 0 son las siguientes\n", xx, x, constante);
        printf("x1 = %f\nx2 = %f\n\n", x1, x2);

    }
}
void calculo2(float r){

    if(r>0){
        float pi=3.14159, r3=pow(r,3), k=(float)4/(float)3;
        float v= k*pi*r3;
        printf("\nEl valor del volumen de la esfera de radio %f es de %f\n\n", r, v);
    } else {
        printf("\n Recuerda que el valor del radio debe ser mayor a 0\n\n");
    }

}

void calculo3(float xo, float vo, float t, float a){

    float termino2=vo*t, termino3=(a*pow(t,2))/(float)2;
    float x=xo+termino2+termino3;
    printf("\nEl desplazamiento final es de %f\n\n", x);

}

int pregunta(int i){

    printf("Desea reiniciar?\n");
    printf("(1) Si\n(2) No\n");
    scanf("%d", &i);
    return i;
    
}