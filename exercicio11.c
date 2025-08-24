#include <stdio.h>

int main() {

    float num1, num2, diferenca;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        diferenca = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, diferenca);
    } else if (num2 > num1) {
        diferenca = num2 - num1;
        printf("%.2f - %.2f = %.2f\n", num2, num1, diferenca);
    } else {
        printf("Os numeros informados sao iguais, portando o resultado e 0!\n");
    }

    return 0;
}