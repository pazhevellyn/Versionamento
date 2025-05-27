#include<stdio.h>
#include<stdlib.h>

int main(){
    int precoProd;

    printf("Qual o preco do produto?");
    scanf("%i", &precoProd);

    if(precoProd >= 100){
        precoProd = precoProd - precoProd*0.1;
        printf("Total com desconto: %i", precoProd);
    }else{
        printf("Nao teve desconto");
    }
    return 0;
}



/* Refaça o exercício do desconto adaptando para um
desconto progressivo de 10% a 50% utilizando switch case*/




