#include <stdio.h>

int main() {
    int dinheiro;
    int emprestimo;

    printf("Tem dinheiro? (1 = SIM, 0 = NAO): ");
    scanf("%d", &dinheiro);

    printf("Consegue emprestimo? (1 = SIM, 0 = NAO): ");
    scanf("%d", &emprestimo);

    if (dinheiro == 1) {
        printf("Compra");
    } 
    else if (emprestimo == 1) {
        printf("Compra");
    } 
    else {
        printf("Nao compra");
    }

    return 0;
}