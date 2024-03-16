#include <stdio.h>
#include <math.h>

int primo(int numero) 
{ // Verifica se o numero é primo
    if (numero < 2) {
        return 0; }
    for (int i = 2; i <= sqrt(numero); i ++) 
    {
        if (numero % i == 0) {
            return 0; }
    }
    return 1;
}

int arrojado(int numero)
{
    int aux = numero;
    while (aux > 0) {
        if (!primo(aux)) {
            return 0;
        }
        aux /= 10; // Retira os digitos 
    }
    return 1;
}

int main() 
{
    int i, qtd, numero;
    scanf("%d", &qtd);

    for ( i = 0; i < qtd; i++) 
    {
        scanf("%d", &numero);
        if (numero == 1 || !primo(numero)) {
            printf("N\n");
            continue; }
        if (arrojado(numero)) {
            printf("S\n"); } 
        else {
            printf("N\n"); }
    }
    return 0;
}