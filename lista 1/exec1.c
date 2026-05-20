//Questão 1 — Número positivo, negativo ou zero
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("POSITIVO\n");
    } else if (numero < 0) {
        printf("NEGATIVO\n");
    } else {
        printf("ZERO\n");
    }

    return 0;
}


//Questão 2 — Maior de idade
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("MAIOR DE IDADE\n");
    } else {
        printf("MENOR DE IDADE\n");
    }

    return 0;
}

//Questão 3 — Par ou ímpar

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("PAR\n");
    } else {
        printf("IMPAR\n");
    }

    return 0;
}



//Questão 4 — Aprovado ou reprovado
#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 7.0) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}


//Questão 5 — Classificação de temperatura
#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura <= 15) {
        printf("FRIO\n");
    } else if (temperatura <= 30) {
        printf("AGRADAVEL\n");
    } else {
        printf("QUENTE\n");
    }

    return 0;
}


//Questão 6 — Maior entre dois números
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior numero e: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero e: %d\n", num2);
    } else {
        printf("NUMEROS IGUAIS\n");
    }

    return 0;
}


//Questão 7 — Intervalo numérico
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 20) {
        printf("DENTRO DO INTERVALO\n");
    } else {
        printf("FORA DO INTERVALO\n");
    }

    return 0;
}


//Questão 8 — Classificação de salário
#include <stdio.h>

int main() {
    float salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 1500) {
        printf("SALARIO BAIXO\n");
    } else if (salario <= 3000) {
        printf("SALARIO MEDIO\n");
    } else {
        printf("SALARIO ALTO\n");
    }

    return 0;
}


//Questão 9 — Nota com conceito
#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 9.0) {
        printf("CONCEITO A\n");
    } else if (nota >= 7.0) {
        printf("CONCEITO B\n");
    } else if (nota >= 5.0) {
        printf("CONCEITO C\n");
    } else {
        printf("CONCEITO D\n");
    }

    return 0;
}

//Questão 10 — Dia da semana (numérico)
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    if (dia == 1) {
        printf("Domingo\n");
    } else if (dia == 2) {
        printf("Segunda\n");
    } else if (dia == 3) {
        printf("Terca\n");
    } else if (dia == 4) {
        printf("Quarta\n");
    } else if (dia == 5) {
        printf("Quinta\n");
    } else if (dia == 6) {
        printf("Sexta\n");
    } else if (dia == 7) {
        printf("Sabado\n");
    } else {
        printf("DIA INVALIDO\n");
    }

    return 0;
}