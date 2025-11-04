#include <stdio.h>

int main() {
    // ============================================================
    //              MOVIMENTO DA TORRE (usando FOR)
    // ============================================================
    // A torre se move em linha reta — horizontalmente ou verticalmente.
    // Aqui, vamos simular o movimento de 5 casas para a DIREITA.

    int movimentoTorre = 5;  // número de casas que a torre vai se mover

    printf("Movimento da Torre:\n");  // título da seção
    for (int i = 1; i <= movimentoTorre; i++) {
        // A cada repetição, a torre "anda" uma casa para a direita
        printf("Direita\n");
    }

    // ============================================================
    //              MOVIMENTO DO BISPO (usando WHILE)
    // ============================================================
    // O bispo se move na diagonal. Neste caso, ele vai se mover
    // 5 casas na diagonal para CIMA e para a DIREITA.

    int movimentoBispo = 5;  // número de casas do movimento
    int i = 1;               // contador para o loop while

    printf("\nMovimento do Bispo:\n");  // título da seção
    while (i <= movimentoBispo) {
        // A cada repetição, o bispo se move uma casa "Cima, Direita"
        printf("Cima, Direita\n");
        i++;  // incrementa o contador
    }

    // ============================================================
    //              MOVIMENTO DA RAINHA (usando DO-WHILE)
    // ============================================================
    // A rainha é a peça mais poderosa, pois se move em qualquer direção.
    // Aqui, vamos simular o movimento de 8 casas para a ESQUERDA.
    // O do-while garante que o bloco de código será executado pelo menos uma vez.

    int movimentoRainha = 8;  // número de casas do movimento
    int j = 1;                // contador para o loop do-while

    printf("\nMovimento da Rainha:\n");  // título da seção
    do {
        // A cada repetição, a rainha se move uma casa para a esquerda
        printf("Esquerda\n");
        j++;  // incrementa o contador
    } while (j <= movimentoRainha);  // condição de repetição

    // ============================================================
    //              MOVIMENTO DO CAVALO (usando FOR + WHILE)
    // ============================================================
    // O cavalo se move em "L": duas casas em uma direção (horizontal ou vertical)
    // e depois uma casa perpendicularmente.
    //
    // Neste caso: duas casas PARA BAIXO e uma casa PARA A ESQUERDA.
    // Usaremos dois loops aninhados:
    //   - Um loop FOR para as duas casas "para baixo"
    //   - Um loop WHILE para a casa "para a esquerda"

    int movimentoBaixo = 2;   // número de casas para baixo
    int movimentoEsquerda = 1; // número de casas para a esquerda

    printf("\nMovimento do Cavalo:\n");  // separação visual

    // Loop externo: movimento para BAIXO (duas casas)
    for (int a = 1; a <= movimentoBaixo; a++) {
        printf("Baixo\n");
    }

    // Loop interno: movimento para a ESQUERDA (uma casa)
    int b = 1;
    while (b <= movimentoEsquerda) {
        printf("Esquerda\n");
        b++;
    }
    
    return 0;
