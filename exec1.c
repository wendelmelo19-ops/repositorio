// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int biometria, senha, modoSeguro;

    printf("Digite a biometria (1/0): ");
    scanf("%d", &biometria);

    printf("Digite a senha (1/0): ");
    scanf("%d", &senha);

    printf("Digite o modo seguro (1/0): ");
    scanf("%d", &modoSeguro);

       if (biometria ==0 && senha == 1 && modoSeguro == 1) { 
          printf ("DESBLOQUEADO/n");
       }
       else if (biometria ==1 && senha ==1 && modoSeguro == 0) {
           printf ("DESBLOQUEADO/n");
       }
    else {
        printf("BLOQUEADO/n");
    }
    return 0;
}
