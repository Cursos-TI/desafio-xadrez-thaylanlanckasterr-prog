#include <stdio.h>

// ============================================================
//          FUNÇÕES RECURSIVAS PARA AS PEÇAS
// ============================================================

// ---------- TORRE ----------
void moverTorre(int casas) {
    // Caso base: quando não há mais casas a mover
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva para a próxima casa
}

// ---------- BISPO ----------
void moverBispo(int vertical, int horizontal) {
    // Caso base: quando não há mais casas a mover
    if (vertical == 0)
        return;

    // Loop aninhado dentro da recursividade:
    // o bispo se move uma casa para "Cima" e "Direita" por iteração
    for (int j = 1; j <= horizontal; j++) {
        printf("Cima, Direita\n");
    }

    // Chamada recursiva reduzindo o movimento vertical
    moverBispo(vertical - 1, horizontal);
}

// ---------- RAINHA ----------
void moverRainha(int casas) {
    // Caso base
    if (casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ============================================================
//          FUNÇÃO PRINCIPAL
// ============================================================
int main() {

    // ============================================================
    //              MOVIMENTO DA TORRE (RECURSIVIDADE)
    // ============================================================
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre); // chamada recursiva
    printf("\n");

    // ============================================================
    //              MOVIMENTO DO BISPO (RECURSIVIDADE + LOOPS)
    // ============================================================
    // Movimento em diagonal: "Cima, Direita"
    int movimentoVertical = 3;  // número de movimentos para cima
    int movimentoHorizontal = 3; // número de movimentos para a direita
    printf("Movimento do Bispo:\n");
    moverBispo(movimentoVertical, movimentoHorizontal);
    printf("\n");

    // ============================================================
    //              MOVIMENTO DA RAINHA (RECURSIVIDADE)
    // ============================================================
    int movimentoRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(movimentoRainha);
    printf("\n");

    // ============================================================
    //              MOVIMENTO DO CAVALO (LOOPS COMPLEXOS)
    // ============================================================
    // O cavalo se move em "L": duas casas em uma direção e depois uma perpendicular.
    // Neste caso: duas casas para CIMA e uma para a DIREITA.
    //
    // Vamos usar loops aninhados com múltiplas variáveis e controle de fluxo (continue/break).

    printf("Movimento do Cavalo:\n");

    int movimentoCima = 2;
    int movimentoDireita = 1;

    // Loop externo controla o movimento vertical
    for (int i = 1, j = movimentoCima; i <= movimentoCima && j > 0; i++, j--) {
        // Se o cavalo já fez duas casas para cima, pula para o próximo movimento
        if (i > movimentoCima) {
            break;
        }
        printf("Cima\n");

        // Loop interno controla o movimento horizontal
        for (int k = 1; k <= movimentoDireita; k++) {
            if (k == 0) {
                continue; // caso hipotético (não ocorre aqui)
            }
            if (k > movimentoDireita) {
                break;
            }
            // Quando o cavalo completa as duas casas para cima, ele move uma para a direita
            if (i == movimentoCima && k == movimentoDireita) {
                printf("Direita\n");
            }
        }
    }

    // ============================================================
    // Fim do programa
    // ============================================================
    return 0;
}
