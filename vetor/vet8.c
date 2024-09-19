#include <stdio.h>

// imprime elementos maiores que a média

int main()
{
    int i, j, tamanho, ultimo = 0, media = 0;
    scanf("%d", &tamanho);
    int vet1[tamanho];

    for (i = 0; i < tamanho; i++) 
    {
        scanf("%d", &vet1[i]);
        media += vet1[i];
    }

    media = media / tamanho;

    for (j = 0; j < tamanho; j++)
    {
        if (vet1[j] > media) 
        {
            if (ultimo != 0)
            {
                printf("%d ", ultimo);
            }
            ultimo = vet1[j];
        }
        
    }

    printf("%d\n", ultimo);

    return 0;
}