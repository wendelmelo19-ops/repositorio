#include <stdio.h>

int main() {
    float nota , frequencia;
    printf ("Qual a sua nota: ");
    scanf ("%f", &nota);
    printf ("Qual a sua frequencia: ");
    scanf ("%f", &frequencia);
    
    if (nota >=7 && frequencia >=75){
        printf ("Aprovado");
    }
    else{
        printf ("Reprovado");
    }

    return 0;
}