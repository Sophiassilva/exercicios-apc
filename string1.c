#include <stdio.h>

int main ()
{
    int i = 0, j = 0;
    char str[1000];
    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
        j++;
    }
    printf("%d", j);

    return 0;
}