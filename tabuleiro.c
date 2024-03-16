#include <stdio.h>

// imprime um tabuleiro 

int main() 
{
    int i, j, linha, coluna;
    scanf("%d %d", &linha, &coluna);

    for (i = 0; i < linha; i++) 
    {
        for (j = 0; j < coluna; j++) 
        {
            printf("[%03d,%03d]", i, j);
        }
        printf("\n");
    }

    return 0;
}
