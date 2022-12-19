//3) Crear un arreglo en donde se carguen las notas de un tercer año de 17 alumnos.
//El programa deberá calcular el promedio del curso.
//Validar datos y mostrar por pantalla el arreglo y el promedio del curso

#include <stdio.h>

int main(){
    float notas[17];
    int i;
    float promedio=0;
    for(i=0;i<18;i++){
        do{
            printf("Ingrese la nota del alumno");
            scanf("%f",&notas[i]); //1 - 10
        }while(notas[i] >=1 && notas[i] <=10);
        promedio += notas[i];
    }

    promedio /= 17;

    for(i=0;i<18;i++) printf("%f",notas[i]);
    printf("El promedio del curso es %i", promedio);

    return 0;
}
