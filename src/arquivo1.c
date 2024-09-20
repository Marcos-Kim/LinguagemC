#include <stdio.h>
//Para trabalhar com arquivos, é necessário importar a biblioteca STDLIB
#include <stdlib.h>
//Importar a biblioteca de texto (string) para escrever em arquivos de texto
#include <string.h>

int main(){
    system("clear");//limpa o terminal
    //Declaração da variável palavra como um ponteiro para guardar os caracteres que formam uma string
    //char *palavra; também funciona, pois array também é um ponteiro
    char palavra[30];
    char *label_nome="Nome: ";
    
    printf("Digite o seu nome completo:\n");
    //scanf("%s" ,palavra);
    // O comando fgets(f->file | gets -> obter). Assim iremos obter o texto que o usuário está digitando no terminal.
    //Definimos também a quantidade de caracteres aceitos pelo "fgets" e o parâmetro stdin(std -> standard | in -> input).
    //Ele olha para a entrada padrão, que neste caso é teclado pelo terminal.
    fgets(palavra,20,stdin);

    FILE *ar;
    ar = fopen("files/teste.txt","a+");
    
    fseek(ar,0,SEEK_END);

    fputs(label_nome,ar);
    fputs(palavra,ar);

    printf("O arquivo está no endereço:%p\n" ,ar);

    fclose(ar);

    return 0;
}