#include <stdio.h>
#include <string.h>

int main() 
{
    int i = 0, j = 0, s = 0;
    char risada[100];
    char comp[100];
    scanf("%s", risada);
    
    while (i < strlen(risada)) 
    {
        if (risada[i] <= 90) 
        {
            risada[i] = risada[i] + 32;
        }
        
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') 
        {
            comp[j] = risada[i];
            j++;
        }
        
        i++;
    }
    if (j == 0) 
    {
        printf("Valor invalido!\n");
        return 0;
    }
    for (s = 0; s < j / 2; s++) 
    {
        if (comp[s] != comp[j - s - 1]) 
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}
