#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Numero digitado igual a zero");
    }
    else if (num >= 0) {
        printf("%d e um numero maior que zero", num);
    }else {
        printf("%d e um numero menor que zero", num);
    }

    return 0;
}