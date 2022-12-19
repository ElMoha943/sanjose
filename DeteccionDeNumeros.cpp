//Dado un arreglo de dimensión 10, se desea detectar cuantos números ingresados son decimales, enteros y ceros. Mostrar por
//pantalla el arreglo, la cantidad de números decimales, la cantidad de números enteros y la cantidad de ceros.

#include <stdio.h>
#include <conio.h>

float arreglo[10];

int main(){
    int i;
    int cantEnteros = 0, cantDecimales = 0, cantCeros = 0; 
    for(i=0;i<10;i++){ 
        print("Ingrese un numero");
        scanf("%f",&arreglo[i]);
        if((int)arreglo[i]%1 == 0 ) cantEnteros++;
        else if (arreglo[i] == 0) cantCeros++;
        else cantDecimales++;
    }
    for(i=0;i<10;i++){ 
        print(arreglo[i]);
    }
    print("Cantidad de Ceros %d",cantCeros );
    printf("Cantidad de Enteros %d",cantEnteros);
    printf("Cantidad de Decimales %d",cantDecimales);
    getch();
    return 0;
}
