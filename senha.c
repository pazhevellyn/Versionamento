#include<stdio.h>
#include<stdlib.h>

int main(){
    int senha  = 1234;
    int senhaUser;

    printf("Digite a senha: ");
    scanf("%i", &senhaUser);

    if(senhaUser == senha){
        printf("Senha correta");
    }else{
        printf("Senha incorreta");
    }

    return 0;
}
