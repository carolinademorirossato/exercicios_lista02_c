#include <stdio.h>

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Pessoa maior de idade\n");
    } else {
        printf("Pessoa menor de idade\n");
    }
    
    return 0;
}