#include <stdio.h>
#include <string.h>

int main ()
{
    int i, o, j, s, qtd = 0;
    char str[43];
    char original[43];
    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++)
    {
        scanf("%s", str);
        strcpy(original, str);
        s = 0;
        o = 0;
        j = 0;
        while (j < strlen(str))
        {
            if (str[j] <= 90)
            {
                str[j] = str[j] + 32;
            }
            j++;
        }
        while (s < strlen(str))
        {
            if (str[s] >= str[s + 1] && str[s + 1] != '\0')
            {
                o++;
            }
            s++;
        }
        if (o > 0)
        {
            printf("%s: N\n", original);
        }
        else
        {
            printf("%s: O\n", original);
        }
    }
    return 0;
}