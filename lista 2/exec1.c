#include <stdio.h>

int main() {
    int idade ;
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    if (idade >=18){
        printf("Pode entrar");
    }
    else if (idade >=16){
        printf ("Pode entrar com responsavel");
    }
    else{
        printf("Não entra");
    }
    return 0;
}