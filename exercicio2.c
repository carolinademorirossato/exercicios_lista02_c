#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("%d e um numero positivo\n", num);
    }else {
        printf("%d e um numero negativo\n", num);
    }

    return 0;
}