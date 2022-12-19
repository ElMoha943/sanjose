#include <stdio.h>
#include <conio.h>

// Se tienen dos nombre y apellido, intercambiar los apellidos y exibirlos.

int main(){
    char nombre1[30],nombre2[30],aux[15];

    printf("Ingrese el nombre y apellido de la primer persona");
    gets(nombre1);

    printf("Ingrese el nombre y apellido de la segunda persona");
    gets(nombre2);

    // aux <- apellido1, apellido1 <-apellido2, apellido2 <- aux
    int i, j, pos, pos2;

    //BUSCA EL ESPACIO DE NOMBRE1
    i=0;
    while(nombre1[i]!="\0"){
        if(nombre1[i]=" "){
            i++;
            pos = i;
            break;
        }
        i++;
    }

    //BUSCA EL ESPACIO DE NOMBRE2
    i = 0;
    while(nombre2[i]!="\0"){
        if(nombre2[i]=" "){
            i++;
            pos2=i;
            break;
        }
        i++;
    }

    //GUARDA EL APELLIDO DE NOMBRE1 EN AUX
    j = 0;
    while(nombre1[i]!="\0"){
        aux[j] = nombre1[i];
        j++;
        i++;
    }

    //GUARDA EL APELLIDO EN EL APELLIDO DE NOMBRE1
    j = pos;
    while(nombre2[i]!="\0"){
        nombre1[j] = nombre2[i];
        j++;
        i++;
    }

    //GUARDAR EL AUX EN EL APELLIDO DE NOMBRE2
    j = pos2;
    while(aux[i]!="\0"){
        nombre2[j] = aux[i];
        j++;
        i++;
    }

    printf("El nombre y apellido de la primer persona es: %s",nombre1);
    printf("El nombre y apellido de la segunda persona es: %s",nombre2);

    getch();
    return 0;
}
