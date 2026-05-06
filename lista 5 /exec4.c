#include <stdio.h>
 
int main() {
    int i, status;
    int concluidas = 0, pendentes = 0;

    for (i = 1; i <= 8; i++) {
        printf("Digite o status da atividade %d (1 para concluida, 0 para pendente): ", i);
        scanf("%d", &status);

        if (status == 1) {
            concluidas++;
        } else {
            pendentes++;
        }
    }
 
    printf("\nConcluidas: %d\n", concluidas);
    printf("Pendentes: %d\n", pendentes);
 
    return 0;
}