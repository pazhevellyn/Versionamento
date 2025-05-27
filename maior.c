#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    if(n1 > n2){
        printf("O numero %i eh maior", n1);
    }else if(n2 > n1){
        printf("O numero %i eh maior", n2);
    }else{
        printf("Os numeros sao iguais");
    }
}

