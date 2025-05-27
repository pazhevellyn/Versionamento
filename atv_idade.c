#include<stdio.h>
#include<stdlib.h>

int main(){
    int dia;
    int mes;
    int ano;

    printf("Digite o dia do seu nascimento: ");
    scanf("%i", &dia);

    printf("Digite o mes do seu nascimento: ");
    scanf("%i", &mes);

    printf("Digite o ano do seu nascimento: ");
    scanf("%i", &ano);

    int idade;

    idade = 2025-ano;

    if(mes>5){
        idade = idade - 1;
    }else if(mes == 5){
        if(dia > 27){
            idade = idade - 1;
        }
    }

    printf("Sua idade eh: %i", idade);
    return 0;

}
