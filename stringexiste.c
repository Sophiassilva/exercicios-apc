#include <stdio.h>

int compara(const char *str, const char *str1)
{
    int i = 0;
    int nao = 0;
    int sim = 1;
    while (str[i] != '\0' || str1[i] != '\0')
    {
        if (str[i] == str1[i])
        {
            i++;
        }
        else
        {
            return nao;
        }
    }
    return sim;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char matriz[n][81], palavras[m][81];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", matriz[i]);
    }
    int resultado = 0;
    for (int j = 0; j < m; j++)
    {
        scanf("%s", palavras[j]);
        int mat = 0;
        for (int cont = 0; cont < n; cont++)
        {
            resultado += compara(palavras[j], matriz[mat]);
            mat++;
        }
    }
    if (resultado == 0) {
        printf("0\n"); 
    }
    else {
        printf("1\n");
    }
    return 0;
}