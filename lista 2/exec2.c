#include <stdio.h>

int main() {
    float compra ;
    printf ("Qual o valor da compra: ");
    scanf ("%f" , &compra);
    
    if (compra > 100){
        printf("Desconto");
    }
    else{
        printf ("Sem desconto");
    }
    return 0;
}