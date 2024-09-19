#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int linhas, i;
    scanf("%d", &linhas); // lê a quantidade de linhas da matriz
    linhas++;
    char matriz[linhas][1001]; 
    for (i = 0; i < linhas; i++)
        { // lê a matriz
            fgets(matriz[i], 1001, stdin);
        } 
    
    int linhaCursor, colunaCursor;
    scanf("%d %d", &linhaCursor, &colunaCursor); // lê a posição inicial do cursor

    int atualLinha = linhaCursor; // variável recebe a linha inicial do cursor
    int atualColuna = colunaCursor; // recebe coluna inicial
    char cursor[2];

    while (scanf("%s", cursor) != EOF)
    {
        if (cursor[0] == 'j')
        {
            atualLinha++;
            atualColuna--;
            if (atualLinha >= linhas) {
                atualLinha--;
            }
            if (atualColuna >= strlen(matriz[atualLinha])) {
                atualColuna = strlen(matriz[atualLinha]) - 2;
            }
            if (matriz[atualLinha][atualColuna] == '\n') {
                atualColuna--;
            }
        }
        else if (cursor[0] == 'k') {
            atualLinha--;
            atualColuna--;
            if (atualLinha < 1) {
                atualLinha = 1;
            }
            if (atualColuna >= strlen(matriz[atualLinha])) {
                atualColuna = strlen(matriz[atualLinha]) - 2;
            }
            if (matriz[atualLinha][atualColuna] == '\n') {
                atualColuna--;
            }
        }
        printf("%d %d %c\n", atualLinha, atualColuna+1, matriz[atualLinha][atualColuna]);
        atualColuna = colunaCursor;
    }
    for (i = 0; i < linhas; i++)
    {
        printf("%s", matriz[i]);
    }
    return 0;
}