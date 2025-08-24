#include <stdio.h>

int main() {

    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 < num2) {
        printf("Valores em ordem crescente: %.2f e %.2f\n", num1, num2);
    } else if (num2 < num1) {
        printf("Valores em ordem crescente: %.2f e %.2f\n", num2, num1);
    } else {
        printf("Os valores sao iguais!\n");
    }

    return 0;
}