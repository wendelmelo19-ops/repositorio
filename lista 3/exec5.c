#include <stdio.h>

int main() {
    int idade, genero, acompanhado;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o genero preferido (1-acao, 2-comedia, 3-terror): ");
    scanf("%d", &genero);

    printf("Esta acompanhado? (1/0): ");
    scanf("%d", &acompanhado);

    if (idade < 18 && genero == 3){
        printf ("Terror nao recomendado");
    }
    if (idade < 18 && genero !=3){
        printf ("Recomendar normalmente");
    }
    if (idade >= 18){
        if (genero == 3 && acompanhado == 0){
            printf("Recomendar com aviso");
        }
        else{
            printf ("Recomendar normalmente");
        }
    }

    return 0;
}