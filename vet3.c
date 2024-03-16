#include <stdio.h>

// separa pares dos impares

int main()
{
    int i, tamanho, aux = 0, aux2 = 0;
    scanf("%d", &tamanho);
    int vet[tamanho];
    int vetPar[tamanho];
    int vetImpar[tamanho];
    
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0) {
            vetPar[aux] = vet[i];
            aux++;
            }
        else {
            vetImpar[aux2] = vet[i];
            aux2++;
            }
    }
    
    for (i = 0; i < aux; i++)
    {
        printf("%d ", vetPar[i]);
    }
    printf("\n");
    
    for (i = 0; i < aux2 ; i++)
    {
        printf("%d ", vetImpar[i]);
    }
    printf("\n");
    
    return 0;
}