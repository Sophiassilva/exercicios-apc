#include <stdio.h>

int main ()
{
    int i = 0, posicao = 0;
    char str[1000];
    scanf("%s", str);

    posicao = strlen(str);
    for (i = posicao - 1; i >= 0; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}