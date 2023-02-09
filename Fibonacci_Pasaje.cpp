#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void Binario(int numeros[], int n){ // 3 5 7 11 13 17 19 23 29 31
    int cociente;
    int binario[10];
    for(int i=0;i<n;i++){
        cociente = numeros[i];
        int j = 0;
        while(cociente > 0){
            binario[j] = cociente % 2; //guardamos el residuo
            cociente = cociente / 2;
            j++;
        }
        printf("El numero %d en binario es: ", numeros[i]);
        for(j=j-1;j>=0;j--)
            printf("%d", binario[j]);
        printf("\n");
    }
}

void Octal(int numeros[], int n){
    int cociente;
    int octal[10];
    for(int i=0;i<n;i++){
        cociente = numeros[i];
        int j = 0;
        while(cociente > 0){
            octal[j] = cociente % 8; //guardamos el residuo
            cociente = cociente / 8;
            j++;
        }
        printf("El numero %d en octal es: ", numeros[i]);
        for(j=j-1;j>=0;j--)
            printf("%d", octal[j]);
        printf("\n");
    }
}

void Hexadecimal(int numeros[],int n){
    int cociente;
    int hexadecimal[10];
    for(int i=0;i<n;i++){
        cociente = numeros[i];
        int j = 0;
        while(cociente > 0){
            hexadecimal[j] = cociente % 16; //guardamos el residuo
            cociente = cociente / 16;
            j++;
        }
        printf("El numero %d en hexadecimal es: ", numeros[i]);
        for(j=j-1;j>=0;j--){
            if(hexadecimal[j] < 10)printf("%d", hexadecimal[j]);
            else printf("%c", hexadecimal[j] + 55);
        }
        printf("\n");
    }
}

int DetectarPrimo(int num){
    int divisores=0;
    for(int j = 1; j < num; j++){ // 0 - 5
        if(num % j == 0){
            divisores++;
        }
    }
    if(divisores < 2) return 1;
    else return 0;
}


int main(){
    int n=30;

    printf("ingrese la cantidad de numeros a convertir: ");
    //scanf("%d", &n);

    int fibonacci[n];

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    int primos[n];
    int cantPrimos = 0;
    int cont = 0; // contador de divisores

    for(int i=0;i<n;i++) primos[i] = 0; // inicializamos el arreglo en 0

    //llenamos el arreglo con los numeros de la serie
    printf("Numeros de la Serie:\n");
    for (int i = 2; i < n; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        printf("%d ", fibonacci[i]);
    }

    //extraemos los primos
    for (int i = 0; i < n; i++){ // recorremos el arreglo
        cont=0;
        if(DetectarPrimo(fibonacci[i]) == 1){
            primos[cantPrimos] = fibonacci[i];
            cantPrimos++;
        }
    }

    printf("Numeros Primos: \n");
    //imprimir el arreglo en decimal
    for (int i = 0; i < n; i++){
        if(primos[i] != 0) printf("%d ", primos[i]);
    }

    printf("\n");

    char opt = '0';
    do{
        printf("\nPresione 1. para pasar a binario 2. para pasar a octal 3. para pasar a hexadecimal 4. salir ");
        opt = getch();
        switch (opt)
        {
        case '1':
            Binario(primos, cantPrimos);
            break;
        case '2':
            Octal(primos, cantPrimos);
            break;
        case '3':
            Hexadecimal(primos, cantPrimos);
            break;
        }
    }while(opt!='4');
    
    return 0;
}
