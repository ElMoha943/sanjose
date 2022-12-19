//3) El usuario ingresa una frase y de esa frase hay que obtener:
//Numero de caracteres
//Numero de consonantes
//Numero de vocales
//Numero de palabras

#include <stdio.h>
#include <conio.n>
#include <string.h>

int main(){

    char *frase;
    int largo = 0, consonantes = 0, vocales = 0, palabras = 0;
    printf("Ingrese la frase")ñ
    gets(frase);
    
    int i = 0;
    while(frase[i]!=13)
    {
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            vocales++; //SI ES VOCAL
        }
        else if(frase[i] >= 'a' && frase[i] <= 'z' || frase[i] >= 'A' && frase[i] <= 'Z') // SI ES UNA LETRA
        {
            consonantes++; //SI ES UNA LETRA, Y NO ES VOCAL, ES CONSONANTE
        }
        else if(frase[i] == ' ') //SI ES UN ESPACIO, ES UNA PALABRA
        {
            palabras++;
        }
        i++; //CONTADOR DE CARACTERES
    }

    printf("Numero de caracteres: %d", i);
    printf("Numero de consonantes: %d", consonantes);
    printf("Numero de vocales: %d", vocales);
    printf("Numero de palabras: %d", palabras);

    getch();
    return 0;
}
