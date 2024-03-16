#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fileiras, lugares, letras = 0, i = 1;
    scanf("%d %d", &fileiras, &lugares);
    getchar();
    lugares = lugares + 1;
    char matriz[fileiras][lugares];

    int fileira = fileiras - 1;
    while (fileira > -1)
    {
        letras = 64 + i;
        matriz[fileira][0] = letras;
        fileira--;
        i++;
    }

    for (int l = 0; l < fileiras; l++)
    {
        for (int c = 1; c < lugares; c++)
        {
            matriz[l][c] = '-';
        }
    }

    int bilhete = 0;
    char fil;
    int contLugar = 0, contFileira = 0;
    while (scanf(" %c%d", &fil, &bilhete) != EOF)
    {
        contFileira = (64 + fileiras) - fil;
        contLugar = bilhete;
        matriz[contFileira][contLugar] = 'X';
    }

    printf("  ");
    for (i = 0; i < lugares - 1; i++)
    {
        int lugar = i + 1;
        if (lugar < 10)
        {
            printf("0%d ", lugar);
        }
        else
        {
            printf("%d ", lugar);
        }
    }
    printf("\n");

    for (int i = 0; i < fileiras; i++)
    {
        for (int j = 0; j < lugares; j++)
        {
            if (j == 0)
            {
                printf("%c ", matriz[i][j]);
            }
            else
            {
                printf("%c%c ", matriz[i][j], matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
