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
