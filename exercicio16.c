#include <stdio.h>

int main() {

    int numero,primeiraParte,segundaParte,soma,quadrado;

    printf("Digite um numero inteiro de quatro digitos: ");
    scanf("%d", &numero);

    primeiraParte = numero / 100;
    segundaParte = numero % 100;

    soma = primeiraParte + segundaParte;
    quadrado = soma * soma;

    if (quadrado == numero) {
        printf("O numero %d possui essa caracteristica.\n", numero);
    }else {
        printf("O numero %d nao possui essa caracteristica.\n", numero);
    }

    return 0;
}