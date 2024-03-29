#include <stdio.h>

int main() {
    int vitorias, derrotas, saldoVitorias;
    char nivel[100];

    printf("Qual a quantidade de vitorias do jogador: \n ");
    scanf("%d", &vitorias);

    printf("Digite a quantidade de derrotas do jogador: \n");
    scanf("%d", &derrotas);

    saldoVitorias = vitorias - derrotas;

    if (saldoVitorias < 10) {
        sprintf(nivel, "Ferro");
    } else if (saldoVitorias >= 11 && saldoVitorias <= 20) {
        sprintf(nivel, "Bronze");
    } else if (saldoVitorias >= 21 && saldoVitorias <= 50) {
        sprintf(nivel, "Prata");
    } else if (saldoVitorias >= 51 && saldoVitorias <= 80) {
        sprintf(nivel, "Ouro");
    } else if (saldoVitorias >= 81 && saldoVitorias <= 90) {
        sprintf(nivel, "Diamante");
    } else if (saldoVitorias >= 91 && saldoVitorias <= 100) {
        sprintf(nivel, "Lendario");
    } else {
        sprintf(nivel, "Imortal");
    }

    printf("O jogador tem saldo de %d e esta no nivel %s\n", saldoVitorias, nivel);

    return 0;
}