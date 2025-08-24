#include <stdio.h>

int main() {

    int num1, num2, num3, num4, num5, num6;
    int contador = 0;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    if( num1 % 2 != 0 ) {
        contador++;
    }

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    if( num2 % 2 != 0 ) {
        contador++;
    }

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);
    if( num3 % 2 != 0 ) {
        contador++;
    }

    printf("Digite o quarto numero inteiro: ");
    scanf("%d", &num4);
    if( num4 % 2 != 0 ) {
        contador++;
    }

    printf("Digite o quinto numero inteiro: ");
    scanf("%d", &num5);
    if (num5 % 2 != 0) {
        contador++;
    }

    printf("Digite o sexto numero inteiro: ");
    scanf("%d", &num6);
    if( num6 % 2 != 0 ) {
        contador++;
    }

    printf("Foram informados %d numeros impares", contador);

    return 0;
}