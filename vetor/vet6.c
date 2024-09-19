#include <stdio.h>

// soma elementos da mesma posição de dois vetores

int main()
{
    int i, j, tamanho;
    scanf("%d", &tamanho);
    int vet1[tamanho];
    int vet2[tamanho];
    int soma[tamanho];
    
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet1[i]);
        soma[i] = vet1[i];
    }
    
    for (j = 0; j < tamanho; j++)
    {
        scanf("%d", &vet2[j]);
        soma[j] += vet2[j];
    }
    
    for (int aux = 0; aux < tamanho; aux++)
    {
        printf("%d\n", soma[aux]);
    }
    return 0;
    
}
