#include <stdio.h>

int main() {
    float cpu, memoria;
    int erroCritico;

    printf("Digite o uso de CPU: ");
    scanf("%f", &cpu);

    printf("Digite o uso de memoria: ");
    scanf("%f", &memoria);

    printf("Ha erro critico? (1/0): ");
    scanf("%d", &erroCritico);

    if (erroCritico == 1){
        printf("Alerta maximo\n");
    }
    else if (cpu > 80 && memoria > 80){
        printf ("Alerta alto\n");
    }
    else if (cpu > 80 || memoria > 80){
        printf ("Alerta medio\n");
    }
    else{
        printf ("Funcionamento normal\n");
    }
    

    return 0;
}