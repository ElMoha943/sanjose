// Ingresar un arreglo de 10 elementos, luego ordenarlos de menor a mayor. Despues buscar un elemento en el arreglo y pasarlo a octal.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void Ordenar(int arreglo[],int n){ //Ordenamiento falso burbuja
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arreglo[i] > arreglo[j]){
                int aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
}

//Busqueda Dicotomica, se usa en arreglos ordenados
int Busqueda(int arreglo[],int n, int elemento){
    int inicio = 0;
    int fin = n-1;
    int medio;
    while(inicio < fin){
        medio = (inicio+fin)/2;
        if arreglo[medio] == elemento
            return medio;
        else if elemento > arreglo[medio]
            inicio = medio+1;
        else
            fin = medio -1;
    }
    return -1;
}

int main(){

    int n, i, octal;
    printf("Ingrese la cantidad de numeros del arreglo\n");
    scanf("%d",&n);

    int arreglo[n];

    for(i=0;i<n;i++){
        printf("Ingrese el numero %d\n",i);
        scanf("%d",&arreglo[i]);
    }

    Ordenar(arreglo, n);

    printf("Ingrese el elemento que quiere buscar\n");
    int elemento;
    scanf("%d",&elemento);

    int posicion = Busqueda(arreglo,n, elemento);

    if(posicion == -1)
        printf("Ese elemento no existe en el arreglo\n");
    else
        printf("El elemento esta en la posicion %d\n",posicion);

    i = 0;
    while(arreglo[posicion]!=0)
    {
        octal[i]=arreglo[posicion]%8;
        arreglo[posicion]/=8;
        i++;
    }
    
    printf("El elemento pasado a octal es:\n")
    for(i=i-1;i>=0;i--)
        printf("%d",octal[i]);

    getch();
    return 0;
}
