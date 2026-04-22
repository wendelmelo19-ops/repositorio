#include <stdio.h>

int main() {
    int tipoUsuario, horario, autorizacao;

    printf("Digite o tipo de usuario (1-aluno, 2-professor): ");
    scanf("%d", &tipoUsuario);

    printf("Digite o horario atual: ");
    scanf("%d", &horario);

    printf("Digite a autorizacao especial (1/0): ");
    scanf("%d", &autorizacao);

    if (tipoUsuario == 2){
     printf("entrada permitida");
    }   
    else if (tipoUsuario == 1 && horario >=8 && horario <18  && autorizacao==0 ){
     printf("entrada permitida");
    }
    else if (tipoUsuario == 1 && autorizacao == 1){
        printf("entrada permitida");
    }
    else {
        printf("entrada Negada");
    }

    return 0;
}
