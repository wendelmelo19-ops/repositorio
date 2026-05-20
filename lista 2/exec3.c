#include <stdio.h>

int main() {
    float nota;
    printf ("Qual a sua nota: ");
    scanf ("%f" , &nota);
    
    if (nota >=7){
        printf("Aprovado");
    }
    else if (nota >=5){
        printf ("Recuperação");
    }
    else {
        printf("Reprovado");
    }

    return 0;
}