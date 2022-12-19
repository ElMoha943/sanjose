//un arreglo random de 30nums, y que te haga un menú para q el usuario elija si pasar a binario, octal o hexadecimal

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int numeros[30];

void llenarArreglo(int numeros[], int n){
    int i;
    srand(time(NULL)); //inicializa el generador de numeros random
    for(i=0;i<n;i++) // se repite n veces
        numeros[i] = rand() % 100 + 1; //llena el arreglo con numeros random, entre 1 y 100
}

void binario(int numeros[], int n){
    int i;
    int cociente; // cociente de la division
    int binario[10]; //arreglo para guardar el binario
    for(i=0;i<n;i++){
        cociente = numeros[i];
        int j = 0;
        while(cociente > 0){
            binario[j] = cociente % 2;
            cociente = cociente / 2;
            j++;
        }
        printf("El numero %d en binario es: ", numeros[i]);
        for(j=j-1;j>=0;j--)
            printf("%d", binario[j]);
        printf("\n");
    }
}

void octal(int numeros[], int n){
    int i;
    int cociente; // cociente de la division
    int octal[10]; //arreglo para guardar el binario
    for(i=0;i<n;i++){
        cociente = numeros[i];
        int j = 0;
        while(cociente > 0){
            octal[j] = cociente % 8;
            cociente = cociente / 8;
            j++;
        }
        printf("El numero %d en octal es: ", numeros[i]);
        for(j=j-1;j>=0;j--)
            printf("%d", octal[j]);
        printf("\n");
    }
}

void hexadecimal(int numeros[], int n){
    int i;
    int cociente; // cociente de la division
    int hexadecimal[10]; //arreglo para guardar el binario
    for(i=0;i<n;i++){
        cociente = numeros[i];
        int j = 0;
        while(cociente > 0){
            hexadecimal[j] = cociente % 16;
            cociente = cociente / 16;
            j++;
        }
        printf("El numero %d en hexadecimal es: ", numeros[i]);
        for(j=j-1;j>=0;j--){
            if(hexadecimal[j] >= 10)
                printf("%c", hexadecimal[j] + 55); // 55 es la diferencia entre el valor de A y 10
            else
                printf("%d", hexadecimal[j]);
        }
        printf("\n");
    }
}

int main(){
    char opt='a';
    do{
        llenarArreglo(numeros, 30); //llena el arreglo con numeros random
        printf("Seleccione 1. Binario, 2. Octal, 3. Hexadecimal, 0. Salir");
        opt = getch();
        switch (opt)
        {
            case '1':
                binario(numeros, 30);
                break;
            case '2':
                octal(numeros, 30);
                break;
            case '3':
                hexadecimal(numeros, 30);
                break;
        }
    }while(opt != '0');
}
