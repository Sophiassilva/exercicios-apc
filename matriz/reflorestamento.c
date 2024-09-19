#include <stdio.h>

int main ()
{
    int aux = 0, coluna = 0, tmp = 0, i, j, n = 0;
    scanf("%d", &n);
    int matriz[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (j = 0; j < n; j++)
    {
        tmp = 0;
        for (i = 0; i < n; i++) 
        {
            if (matriz[i][j] > 0) {
                tmp++;
            }
            if (tmp > aux) 
            {
                aux = tmp;
                coluna = j + 1;
            }
        }
    }
    printf("%d\n", coluna);
    return 0;
}