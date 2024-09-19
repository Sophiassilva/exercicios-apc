#include <stdio.h>
#include <string.h>

int main ()
{
    int i = 0, maior = 0, qtd = 0;
    scanf("%d", &qtd);
    char str[qtd][100];

    while (i < qtd)
    {
        scanf("%s", str[i]);
        if (strlen(str[i]) > maior) 
        {
            maior = strlen(str[i]);
        }
        i++;
    }
    printf("%d", maior);

    return 0;
}
