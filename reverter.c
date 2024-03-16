#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1001], palavra[41], substituta[41];

    fgets(frase, 1001, stdin);
    fgets(palavra, 41, stdin);
    fgets(substituta, 41, stdin);

    int tamanhoPalavra = strlen(palavra) - 1;

    for (char *p = strtok(frase, " "); p; p = strtok(NULL, " "))
    { // separa as palavras e verifica se é a palavra a ser substituída
        if (strncmp(p, palavra, tamanhoPalavra) == 0)
        {
            printf("%s ", substituta);
        }
        else
        {
            printf("%s ", p);
        }
    }

    return 0;
}
