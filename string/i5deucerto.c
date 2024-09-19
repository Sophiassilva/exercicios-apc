#include <stdio.h>

size_t strlen_(const char s[]) {
    int i = 0;
    for (; s[i]; i++);
    return i;
}

int main() 
{
    char str[10001];
    char palavra[41];
    char substituta[41];
    fgets(str, 10001, stdin);
    scanf("%s %s", palavra, substituta);

    int tamanho = strlen_(str);
    int tamanhoPalavra = strlen_(palavra);
    int tamanhoSubstituta = strlen_(substituta);

    char frasefinal[10001];
    int contadorFrasefinal = 0, i = 0;

    while (i < tamanho) 
    {
        int j = 0, encontrouPalavra = 1;
        for (; j < tamanhoPalavra; j++) 
        {
            if (str[i + j] != palavra[j]) {
                encontrouPalavra = 0;
                break;
            }
        }
        if (encontrouPalavra) {
            for (j = 0; j < tamanhoSubstituta; j++) 
            {
                frasefinal[contadorFrasefinal] = substituta[j];
                contadorFrasefinal++;
            }
            i += tamanhoPalavra;
        } 
        else {
            frasefinal[contadorFrasefinal] = str[i];
            contadorFrasefinal++;
            i++;
        }
    }
    frasefinal[contadorFrasefinal] = '\0';
    printf("%s", frasefinal);
    return 0;
}
