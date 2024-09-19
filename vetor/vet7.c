#include <stdio.h>

// verifica se dois vetores são iguais

int main()
{
    int i, tamanho, contador = 0;
    scanf("%d", &tamanho);
    int vet1[tamanho], vet2[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet1[i]);
    }

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet2[i]);
    }

    for (i = 0; i < tamanho; i++)
    {
        if (vet1[i] != vet2[i])
        {
            contador++;
        }
    }

    if (contador != 0)
    {
        printf("nao\n");
    }
    else {
        printf("sim\n");
    }
}