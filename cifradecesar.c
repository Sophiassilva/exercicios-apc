#include <stdio.h>

size_t strlen_(const char s[])
{
    size_t i = 0;
    for (; s[i]; i++);
    return i;
}

int main ()
{
    int i, j = 0, qtd;
    scanf("%d\n", &qtd);
    char str[1001];
    while (j < qtd)
    {
        fgets(str, 1001, stdin);
        j++;
        i = 0;
        while (i < strlen_(str))
        {
            if (str[i] >= 'A' && str[i] <= 'M') {
                str[i] = str[i] + 13;
                printf("%c", str[i]);
                i++;
            }
            else if (str[i] == '\0') {
                printf("%c", str[i]);
                i++;
            }
            else if (str[i] >= 'N' && str[i] <= 'Z') {
                str[i] = str[i] - 13;
                printf("%c", str[i]);
                i++;
            }
            else{
                printf("%c", str[i]);
                i++;
            }
        }
    }
    return 0;
}