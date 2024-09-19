#include <stdio.h>

// segundo e terceiro menor elemento do vetor

int main()
{
    int i, tamanho, valorMenor = 10001, segundoM = 100002, terceiroM = 100003;
    scanf("%d", &tamanho);
    int vet[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] < valorMenor)
        {
            terceiroM = segundoM;
            segundoM = valorMenor;
            valorMenor = vet[i]; 
        }
        else if (vet[i] > valorMenor && vet[i] < segundoM)
        {
            terceiroM = segundoM;
            segundoM = vet[i];
        }
        else if (vet [i] > segundoM && vet[i] < terceiroM)
        {
            terceiroM = vet[i];
        }
    }
    printf("%d\n%d\n", segundoM, terceiroM);

    return 0;
}