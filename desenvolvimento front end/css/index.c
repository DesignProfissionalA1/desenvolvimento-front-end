#include <stdio.h>

int main() {
    char turno;

    // Entrada de dados
    printf("Digite o turno que voce estuda (M - Matutino, V - Vespertino, N - Noturno): ");
    scanf(" %c", &turno); // espaço antes de %c ignora enter/espacos

    // Estrutura if-else
    if (turno == 'M' || turno == 'm') {
        printf("Bom dia!\n");
    } else if (turno == 'V' || turno == 'v') {
        printf("Boa tarde!\n");
    } else if (turno == 'N' || turno == 'n') {
        printf("Boa noite!\n");
    } else {
        printf("Turno invalido\n");
    }

    return 0;
}
