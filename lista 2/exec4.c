#include <stdio.h>

int main() {
    int numero;
    printf ("Qual o numero: ");
    scanf ("%d", &numero);
    
    if (numero <=10){
        printf ("Categoria A");
    }
    else if (numero <=20){
        printf ("Categoria B");
    }
    else if (numero <=30){
        printf ("Categoria C");
    }
    else {
        printf ("Categoria Invalida");
    }
    return 0;
}