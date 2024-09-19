#include <stdio.h>
#include <string.h>

int main() {
    int linhas, i;
    scanf("%d", &linhas); // lê a quantidade de linhas no documento
    linhas++;

    char matriz[linhas][1001]; // cria a matriz
    for (i = 0; i < linhas; i++) { // lê cada linha de texto
        fgets(matriz[i], 1001, stdin);
        matriz[i][strcspn(matriz[i], "\n")] = '\0'; // remove o caractere de nova linha
    }

    int linha_cursor, coluna_cursor;
    scanf("%d %d", &linha_cursor, &coluna_cursor); // lê a posição inicial do cursor

    int atual_linha = linha_cursor; // variável atual_linha recebe a linha inicial do cursor
    int atual_coluna = coluna_cursor; // recebe coluna inicial

    char comando[2];

    while (scanf("%s", comando) != EOF) {
        if (comando[0] == 'j') { // comando para descer uma linha
            atual_linha++; // incrementa uma linha
            if (atual_linha >= linhas) {
                atual_linha--;
            }
            if (matriz[atual_linha][atual_coluna - 1] == ' ') {
                atual_coluna--;
            }
            printf("%d %d %c\n", atual_linha, atual_coluna, matriz[atual_linha][atual_coluna - 1]);
        } else if (comando[0] == 'k') { // comando para subir uma linha
            atual_linha--; // volta uma linha
            if (atual_linha < 1) {
                atual_linha = 1;
            }
            if (matriz[atual_linha][atual_coluna - 1] == ' ') {
                atual_coluna--;
            }
            printf("%d %d %c\n", atual_linha, atual_coluna, matriz[atual_linha][atual_coluna - 1]);
        }
    }

    return 0;
}
