#include <stdio.h>

int main() {
    int loginOk, dispositivoConhecido, tentativaSuspeita;

    printf("Login correto? (1/0): ");
    scanf("%d", &loginOk);
    
    if (loginOk == 1){
        
        printf("Dispositivo conhecido? (1/0): ");
    scanf("%d", &dispositivoConhecido);

        printf("Tentativa suspeita? (1/0): ");
    scanf("%d", &tentativaSuspeita);

    
        if (dispositivoConhecido == 1 && tentativaSuspeita == 0){
            printf("Acesso Liberado");
        }
        else{
            printf ("Verificacao extra necessaria");
        }
    }
    else{
        printf ("Acesso negado");
    }

    return 0;
}