#include <stdio.h>

// imprime indices dos elementos pares e impares

int main()
{
    int i, tamanho, cont = 0, cont2 = 0;
    scanf("%d", &tamanho);
    int vet[tamanho], vetPar[tamanho], vetImpar[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < tamanho; i++)
    {
        if (vet[i] % 2 == 0)
        {
            vetPar[cont] = i;
            cont++;
        }
        else 
        {
            vetImpar[cont2] = i;
            cont2++;
        }
    }

    for (i = 0; i < cont; i++)
    {
        printf("%d ", vetPar[i]);
    }
    printf("\n");
    
    for (i = 0; i < cont2; i++)
    {
        printf("%d ", vetImpar[i]);
    }
    printf("\n");

    return 0;
}