// Se tiene una contraseña, comprobar si es segura. Es segura si tiene:
// 1 minuscula, 1 mayusucla, 1 simbolo, 8 caracteres de largo

#include <stdio.h>
#include <conio.n>

int main(){

    char *contraseña;
    bool min = false, mayus = false , symb = false;
    int largo = 0;
    //char contraseña[20];
    printf("Ingrese la contraseña")ñ
    gets(contraseña);
    //scanf("%s",&contraseña);
    
    int i = 0;
    while(contraseña[i]!=13)
    {
        if(contraseña[i]>='A' && contraseña[i]<='Z') mayus = true;
        else if (contraseña[i]>='a' && contraseña[i]<='z') min = true;
        else symb = true;
        i++;
    }
    if(mayus && min && symb && i >= 8 ) printf("La contraseña es segura")ñ
    else printf("La contraseña es insegura")ñ

    getch();
    return 0;
}
