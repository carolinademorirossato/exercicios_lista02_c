#include <stdio.h>

int main() {

    int idadeNadador;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idadeNadador);

    if (idadeNadador >= 5 && idadeNadador <= 7) {
        printf("O nadador pertence a categoria Infantil A\n");
    } else if (idadeNadador >= 8 && idadeNadador <= 10) {
        printf("O nadador pertence a categoria Infantil B\n");
    } else if (idadeNadador >= 11 && idadeNadador <= 13) {
        printf("O nadador pertence a categoria Juvenil A\n");
    } else if (idadeNadador >= 14 && idadeNadador <= 17) {
        printf("O nadador pertence a categoria Juvenil B\n");
    } else if (idadeNadador >= 18) {
        printf("O nadador pertence a categoria Senior\n");
    } else {
        printf("A idade informada nao corresponde a nenhuma categoria!\n");
    }

    return 0;
}