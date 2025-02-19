#include <stdio.h>


int main() {
    // Menu do jogo
    int menu;

    // Escolha de peça
    int escolha;

    // Escolha de direção
    char direcao;

    // Movimentação das peças
    int jogada;

    // Inicio do jogo
    printf("====JOGO DE XADREZ====\n");
    printf("1. Iniciar Jogo...\n");
    printf("2. Regras do jogo...\n");
    printf("3. Sair do jogo...\n");
    scanf("%d", &menu);

    // Menu do jogo
    switch (menu)
    {
    case 1:
        // Inicio
        printf("Iniciando partida!\n");

        // Escolhendo peça
        printf("Escolha a peça para mover:\n");
        printf("1. Bispo...\n");
        printf("2. Torre...\n");
        printf("3. Rainha...\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Você escolheu o Bispo...\n");

            // Escolha de numeros de casas para movimentação
            printf("Digite um número de 1 a 7 para mover o bispo:\n");
            scanf("%d", &jogada);

            // Tratamento para jogada errada
            if(jogada == 0 || jogada > 7) {
                printf("Jogada incorreta...\n");
                printf("Digite um número de 1 a 7 para mover o bispo:\n");
                scanf("%d", &jogada);
            } else {
                printf("Carregando Jogada...\n");
            }

            // Escolha da direção
            printf("Digite a direção para a qual a peça ira se mover: \n");
            printf("D. Diagonal Direita...\n");
            printf("R. Diagonal Direita Traseira...\n");
            printf("E. Diagonal Esquerda...\n");
            printf("T. Diagonal Esquerda Traseira...\n");
            scanf(" %c", &direcao);

            switch (direcao)
            {
            case 'D':
            case 'd':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Bispo para a Diagonal Direita...\n", i);
                }
                break;
            
            case 'R':
            case 'r':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Bispo para a Diagonal Direita Traseira...\n", i);
                }
                break;

            case 'E':
            case 'e':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Bispo para a Diagonal Esquerda...\n", i);
                }
            break;

            case 'T':
            case 't':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Bispo para a Diagonal Esquerda Traseira...\n", i);
                }
            break;
            default:
                printf("Opção inválida...\n");
                break;
            }
            break;

        case 2:
            printf("Você escolheu a Torre...\n");

            // Escolha de numeros de casas para movimentação
            printf("Digite um número de 1 a 8 para mover a torre:\n");
            scanf("%d", &jogada);

            // Tratamento para jogada errada
            if(jogada == 0 || jogada > 7) {
                printf("Jogada incorreta...\n");
                printf("Digite um número de 1 a 8 para mover a torre:\n");
                scanf("%d", &jogada);
            } else {
                printf("Carregando Jogada...\n");
            }

            // Escolha da direção
            printf("Digite a direção para a qual a peça ira se mover: \n");
            printf("D. Diagonal Direita...\n");
            printf("E. Diagonal Esquerda...\n");
            printf("T. Traseira...\n");
            printf("F. Frente...\n");
            scanf(" %c", &direcao);

            switch (direcao)
            {
            case 'D':
            case 'd':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Torre para a Direita...\n", i);
                }
                break;
            
            case 'E':
            case 'e':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Torre para a Esquerda...\n", i);
                }
                break;

            case 'T':
            case 't':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Torre para a Traseira...\n", i);
                }
            break;

            case 'F':
            case 'f':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Torre para a Frente\n", i);
                }
            break;
            default:
                printf("Opção inválida...\n");
                break;
            }
            break;
        
        case 3:
            printf("Você escolheu a Rainha...\n");

            // Escolha de numeros de casas para movimentação
            printf("Digite um número de 1 a 8 para mover a torre:\n");
            scanf("%d", &jogada);

            // Tratamento para jogada errada
            if(jogada == 0 || jogada > 7) {
                printf("Jogada incorreta...\n");
                printf("Digite um número de 1 a 8 para mover a rainha:\n");
                scanf("%d", &jogada);
            } else {
                printf("Carregando Jogada...\n");
            }

            // Escolha da direção
            printf("Digite a direção para a qual a peça ira se mover: \n");
            printf("D. Direita...\n");
            printf("E. Esquerda...\n");
            printf("C. Diagonal Direita Traseira...\n");
            printf("V. Diagonal Esquerda Traseira...\n");
            printf("B. Diagonal Direita Frontal...\n");
            printf("N. Diagonal Esquerda Frontal...\n");
            printf("T. Traseira...\n");
            printf("F. Frente...\n");
            scanf(" %c", &direcao);

            switch (direcao)
            {
            case 'D':
            case 'd':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Rainha para a Direita...\n", i);
                }
                break;
            
            case 'E':
            case 'e':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Rainha para a Esquerda...\n", i);
                }
                break;

            case 'C':
            case 'c':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Rainha para a Diagonal Direita Traseira...\n", i);
                }
                break;

            case 'V':
            case 'v':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Rainha para a Esquerda Traseira...\n", i);
                }
                break;

            case 'B':
            case 'b':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Rainha para a Diagonal Direita Frontal...\n", i);
                }
                break;

            case 'N':
            case 'n':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Rainha para a Diagonal Esquerda Frontal...\n", i);
                }
                break;

            case 'T':
            case 't':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Rainha para a Traseira...\n", i);
                }
            break;

            case 'F':
            case 'f':
                // Loop de movimentação
                for (int i = 1; i <= jogada; i++) {
                    printf("%d movimento da peça Rainha para a Frente\n", i);
                }
            break;
            default:
                printf("Opção inválida...\n");
                break;
            }
        break;
        default:
            printf("Opção inválida...\n");
            break;
        }
        break;

    case 2:
        // Regras do Xadrez
        printf("O xadrez e um jogo de estrategia disputado entre dois jogadores, cada um controlando 16 pecas:\n");
        printf("\tum rei, uma rainha, duas torres, dois bispos, dois cavalos e oito peoes.\n");
        printf("O objetivo do jogo e dar xeque-mate no rei adversario, ou seja, deixa-lo sem movimentos legais para escapar de um ataque.\n\n");
        
        printf("Cada peca tem um movimento especifico:\n");
        printf("\t- Rei: Move-se uma casa em qualquer direcao.\n");
        printf("\t- Rainha: Movimenta-se em qualquer direcao, quantas casas quiser.\n");
        printf("\t- Torre: Move-se em linha reta, na vertical ou horizontal.\n");
        printf("\t- Bispo: Move-se diagonalmente.\n");
        printf("\t- Cavalo: Move-se em 'L' (duas casas em uma direcao e uma perpendicular).\n");
        printf("\t- Peao: Move-se uma casa a frente (ou duas no primeiro movimento) e captura na diagonal.\n\n");
        
        printf("O jogo comeca com as pecas dispostas em um tabuleiro de 64 casas (8x8) e segue uma sequencia alternada de jogadas.\n");
        printf("Algumas regras especiais incluem:\n");
        printf("\t- Roque: Movimento especial do rei e da torre para protecao e desenvolvimento.\n");
        printf("\t- En passant: Captura especial envolvendo peoes.\n");
        printf("\t- Promocao: Quando um peao chega a oitava fileira, pode ser promovido a qualquer peca, exceto rei.\n\n");
        
        printf("A partida termina com xeque-mate, empate (por afogamento, repeticao de jogadas, falta de material, entre outros) ou desistencia de um dos jogadores.\n");
        break;
    
    case 3:
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida...\n");
        break;
    }

    return 0;
}
