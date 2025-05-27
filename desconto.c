#include <stdio.h>
#include <stdlib.h>

int main(){
    int precoProd;
    printf("Digite o preco do produto: ");
    scanf("%i", &precoProd);

    switch(precoProd){
        case 100:
            precoProd = precoProd - precoProd*0.1;
            printf("Preco com desconto: %i", precoProd);
        break;
        case 200:
            precoProd = precoProd - precoProd*0.2;
            printf("Preco com desconto: %i", precoProd);
        break;
        case 300:
            precoProd = precoProd - precoProd*0.3;
            printf("Preco com desconto: %i", precoProd);
        break;
        case 400:
            precoProd = precoProd - precoProd*0.4;
            printf("Preco com desconto: %i", precoProd);
        break;
        case 500:
            precoProd = precoProd - precoProd*0.5;
            printf("Preco com desconto: %i", precoProd);
        break;
        default:
            printf("Nao aplica desconto");
    }
    return 0;
}
