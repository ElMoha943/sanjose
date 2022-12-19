#include <stdio.h>
#include <conio.h>
#include <string.h>

// Se ingresa una palabra, ver que letra es la que mas se repite.

int main(){
    char palabra[30];
    int i, j, cont, max;
    char letra;
    printf("Ingrese una palabra: ");
    gets(palabra);
    max = 0;
    for(i=0; i<strlen(palabra); i++){
        cont = 0;
        for(j=0; j<strlen(palabra); j++){
            if(palabra[i] == palabra[j]){
                cont++;
            }
        }
        if(cont > max){
            max = cont;
            letra = palabra[i];
        }
    }
    printf("La letra que mas se repite es: %c", letra);
    getch();
    return 0;
}
