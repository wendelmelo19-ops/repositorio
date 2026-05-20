#include <stdio.h>

int main() {
    int numero;
    printf ("Qual o numero: ");
    scanf ("%d", &numero);
    
    if (numero > 0){
        printf ("Positivo");
    }
    else if (numero == 0){
        printf ("Zero");
    }
    else {
        printf ("Negativo");
    }
    return 0;
}