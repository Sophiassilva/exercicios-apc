#include <stdio.h>
#include <math.h>

int main()
{
    int t, g, raiz, resultado;
    scanf("%d %d", &t , &g);

    t = sqrt(t);
    for (int i = 0; i  < g; i++) 
    {

        if (t % 2 == 0) 
        {
            raiz = t - 1;
            resultado = raiz * raiz;
        }
        else if (t % 2 != 0) 
        {
            raiz = (t + t) -1;
            resultado = raiz * raiz;
        }
        printf("%d\n", resultado);
        t = raiz;
    }
    return 0;
}