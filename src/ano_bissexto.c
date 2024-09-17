#include <stdio.h>

int main(){
    int ano;
    printf("Digite um ano:\n");
    //Endereço de memória da variável ano.
    scanf("%d" ,&ano);
    if(ano % 4 == 0){
        printf("O ano digitado é bissexto\n");
    }
    return 0;
}