#include <stdio.h>

int main(){
    int final_placa;
    printf("Digite o número final da placa do seu veículo");
    scanf("%d",&final_placa);

    switch(final_placa){
        case 1:
            printf("Rodízio na segunda-feira");
            break;
        case 2:
            printf("Rodízio na segunda-feira");
            break;
        case 3:
            printf("Rodízio na terça-feira");
            break;
        case 4:
            printf("Rodízio na terça-feira");
            break;
        case 5:
            printf("Rodízio na quarta-feira");
            break;
        case 6:
            printf("Rodízio na quarta-feira");
            break;
        case 7:
            printf("Rodízio na quinta-feira");
            break;
        case 8:
            printf("Rodízio na quinta-feira");
            break;
        case 9:
            printf("Rodízio na sexta-feira");
            break;
        case 0:
            printf("Rodízio na sexta-feira");
            break;
        default:
            printf("Final de placa inexistente");
            break;
    }
    return 0;
}