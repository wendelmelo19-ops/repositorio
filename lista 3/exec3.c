#include <stdio.h>

int main() {
    float distancia;
    int premium, chuva;

    printf("Digite a distancia da entrega: ");
    scanf("%f", &distancia);

    printf("Cliente premium? (1/0): ");
    scanf("%d", &premium);

    printf("Esta chovendo? (1/0): ");
    scanf("%d", &chuva);

    if (premium == 1 && distancia <= 20){
        printf ("Entrega gratuita");
    }
    else if (distancia <= 10 && chuva == 0){
        printf ("Entrega normal");
    }
    else{
        printf ("Entrega com taxa");
    }

    return 0;
}