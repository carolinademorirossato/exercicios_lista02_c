#include <stdio.h>
#include <stdlib.h>

int main() {

    float primeiroOperando, segundoOperando, resultado;
    char operador;

    printf("Digite o primeiro operando: ");
    scanf("%f", &primeiroOperando);

    printf("Digite o segundo operando: ");
    scanf("%f", &segundoOperando);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    if (operador != '+' && operador != '-' && operador != '*' && operador != '/') {
        printf("Operador invalido!\n");
        exit(1);
    }

    if (segundoOperando == 0 && operador == '/') {
        printf("Divisão por zero!\n");
        exit(1);
    }

    if (operador == '+') {
        resultado = primeiroOperando + segundoOperando;
        printf("%f + %f = %.2f\n", primeiroOperando, segundoOperando, resultado);
    } else if (operador == '-') {
        resultado = primeiroOperando - segundoOperando;
        printf("%f - %f = %.2f\n", primeiroOperando, segundoOperando, resultado);
    } else if (operador == '*') {
        resultado = primeiroOperando * segundoOperando;
        printf("%f * %f = %.2f\n", primeiroOperando, segundoOperando, resultado);
    } else if (operador == '/') {
        resultado = primeiroOperando / segundoOperando;
        printf("%f / %f = %.2f\n", primeiroOperando, segundoOperando, resultado);
    }

    return 0;
}