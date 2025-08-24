#include <stdio.h>

int main() {

    float altura, pesoIdealHomens, pesoIdealMulheres;
    char sexo;

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Informe seu sexo (m ou M para masculino, f ou F para feminino): ");
    scanf(" %c", &sexo);

    pesoIdealHomens = (72.7 * altura) - 58;
    pesoIdealMulheres = (62.1 * altura) - 44.7;

    if (sexo == 'm' || sexo == 'M') {
        printf("Peso ideal: %.2f kg", pesoIdealHomens);
    } else if (sexo == 'f' || sexo == 'F') {
        printf("Peso ideal: %.2f kg", pesoIdealMulheres);
    } else {
        printf("Sexo digitado invalido.\n");
    }

    return 0;
}