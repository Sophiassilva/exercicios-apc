#include <stdio.h>
#include <string.h>

int main ()
{
    int i = 0, j = 0, qtd;
    scanf("%d\n", &qtd);
    char str[1001];
    while (j < qtd)
    {
        fgets(str, 1001, stdin);
        j++;
    }

    while (i < strlen(str))
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
    printf("\n");
    return 0;
}

/*  while (i < strlen(str))
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
    } */

       /* while (i < strlen(str))
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
    printf("\n");
    return 0;
}

 while (i < strlen(str))
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
    } */