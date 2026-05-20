#include <stdio.h>

int main() {
    int idade;
    printf ("Qual a sua idade: ");
    scanf ("%d", &idade);
    
    if (idade >=18){
        printf ("Maior");
    }
    else {
        printf ("Menor");
    }

    return 0;
}