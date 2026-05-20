#include <stdio.h>

int main() {
    int codigoValido, jaUsouCupom;
    float valorCompra;

    printf("Codigo valido? (1/0): ");
    scanf("%d", &codigoValido);
    
    if (codigoValido == 1){

        printf("Digite o valor da compra: ");
        scanf("%f", &valorCompra);

        printf("Ja usou cupom? (1/0): ");
        scanf("%d", &jaUsouCupom);

    
        if (jaUsouCupom == 0 && valorCompra >= 100){
            printf ("Desconto aplicado");
        }
        else{
            printf ("Cupom invalido para uso");
        }
    }
    else{
        printf ("Cupom invalido");
    }
    return 0;
}