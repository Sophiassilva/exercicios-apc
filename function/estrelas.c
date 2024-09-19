#include <stdio.h>

int contarEstrelas(int qtd,int abertura)
{
    int resultado = 0, contador = 0;
    for (int i = 0; i < qtd; i++) {
        scanf("%d", &resultado);
        resultado = resultado * abertura;
        if (resultado >= 40000000) {
            contador++;
        }
    }
    return contador;
}

/* int main()
{
    int qtd, abertura;
    scanf("%d,%d", &qtd, &abertura);
    int resultado = contarEstrelas(qtd,abertura);
    printf("resultado %d\n", resultado);
    return 0;
} */
