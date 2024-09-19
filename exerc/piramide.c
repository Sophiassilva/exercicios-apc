#include <stdio.h>

int main ()
{
    int i, j, linha, num; 
    scanf("%d", &linha);
    num = linha + 1;

    for (i = 1; i < num; i++) 
    {
        for (j = 0; j < i; j++)
        {
            printf("%.2d ", i);
        }
        printf("\n");
    }
        
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("%.2d ", j);
        }
        printf("\n");
    }
    return 0;
}