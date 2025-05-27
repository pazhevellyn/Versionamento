#include <stdio.h>
#include<stdlib.h>

int main(){
    int ano;

    printf("Digite um ano: ");
    scanf("%i", &ano);

    if(ano%4 == 0){
        printf("Ano bissexto");
    }else{
        printf("O ano nao eh bissexto");
    }

    return 0;
}
