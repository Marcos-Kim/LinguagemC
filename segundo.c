//Biblioteca standard Input/Output
#include <stdio.h>

int main(){

    //Declara variável car do tipo char
    char car;
    //Mostra na tela
    printf("Digite um caracter e ENTER\n");
    //%c para ler ou mostrar char 1 char
    scanf("%c" , &car);
    //Mostra na tela valor de car lido
    printf("Caractere digitado é %c\n" ,car);
    //fim do main
    return 0;
}