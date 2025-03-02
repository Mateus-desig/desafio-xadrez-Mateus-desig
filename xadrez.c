#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Tamanho do tabuleiro.
#define Size 8

void printBoard(char board[Size][Size])
{

    for (int i = 0; i < Size; i++)
    {
        for (int k = 0; k < Size; k++)
        {
            printf("%c", board[i][k]);
        }
        printf("\n");
    }
    printf("\n");
}

// Bispo.
void moveBishop(int x, int y, char board[Size][Size]){

    for (int i = 0; i < Size; i++)
    {
        if (x + i < Size && y + i < Size) board[x + i][y + i] = 'B';  // Diagonal direita-baixo.
        if (x - i >= 0 && y - i >= 0) board[x - i][y - i] = 'B';  // Diagonal esquerda cima.
        if (x + i < Size && y - i >= 0) board[x + i][y - i] = 'B';  // Diagonal esquerda baixo.
        if (x - i >= 0 && y + i < Size) board[x - i][y + i] = 'B';  // Diagonal direita cima.
    }
    
}



int main()
{
    char board[Size][Size];

    // Iniciar tabuleiro vazio.
    for (int i = 0; i < Size; i++)
        for (int l = 0; l < Size; l++)
            board[i][l] = '.';

    // Posição de inicio.
    int x = 3, y = 3;

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    board[x][y] = 'P'; // Posição inicial da pessa.
    printBoard(board);

    return 0;
}
