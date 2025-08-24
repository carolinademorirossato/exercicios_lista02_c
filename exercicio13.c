#include <stdio.h>

int main() {

    int a, b, c, codigo, resultado;

    printf("Digite um codigo (1,2,3 ou 4): ");
    scanf("%d", &codigo);

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    printf("Informe o valor de c: ");
    scanf("%d", &c);

    if (codigo == 1) {
        resultado = a * b * c;
        printf("O resultado da multiplicacao e: %d\n", resultado);
    } else if (codigo == 2) {
        resultado = a + b + c;
        printf("O resultado da soma e: %d\n", resultado);
    } else if (codigo == 3) {
        resultado = a - b - c;
        printf("O resultado da subtracao e: %d\n", resultado);
    } else if (codigo == 4) {
        resultado = (a * a * a) + (b * b * b) + (c * c * c);
        printf("Soma dos cubos: %d\n", resultado);
    } else {
        printf("Erro, digite um codigo entre 1 e 4\n");
    }

    return 0;
}