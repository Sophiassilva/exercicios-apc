#include <stdio.h>

int main()
{
    int i, j, continua = 1, n = 0;
    scanf("%d", &n);
    getchar();
    int matriz[n][n];

    for (i = 0; i < n; i++) // lê a matriz
    { 
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    int FazDeNovo = 0;

    while (continua != 0) // continua é inicializada com 1 para fazer o loop pelo menos uma vez
    {
        int contUm = 0, l;
        for (i = 0; i < n; i++) // passo 1
        {
            for (j = 0; j < n; j++) // verifica as linhas com apenas 1's
            {
                if (matriz[i][j] == 1) {
                    contUm++; 
                }
            }
            if (contUm == n) { // substitui as linhas com apenas 1's por 0's
            for (l = 0; l < n; l++) 
            {
                matriz[i][l] = 0;
                printf("%d ", matriz[i][l]); // imprime direto pq é isso que eu gosto
            }
            printf("\n");
            }
            else {
                for (l = 0; l < n; l++) 
                {
                    printf("%d ", matriz[i][l]);
                }
                printf("\n");
            }
            contUm = 0;
        } 
        printf("\n"); // primeiro passo tudo certo
        // jogar os 1's para baixo
        for (i = n - 2; i >= 0; i--) 
        {
            for (j = 0; j < n; j++)
            {
                if ((matriz[i][j] == 1) && (matriz[i + 1][j] == 0)&& (i+1 < n)) { // se tiver 1 acima do 0
                    matriz[i][j] = 0;
                    matriz[i+1][j] = 1; // inverte as posições
                    }
                    int compara = i+2;
                    if (compara < n && matriz[i+1][j] == 1 && matriz[compara][j] == 0) { // se depois de inverter ainda tiver 1 acima do 0
                        i+=2; // volta pra linha
                    }
            }
        }
        FazDeNovo = 0;
        for (i = 0; i < n; i++)
        {
            contUm = 0;
            for (j = 0; j < n; j++)
            {
                printf("%d ", matriz[i][j]);
                if (matriz[i][j] == 1){ // verifica a quantidade de 1's por linha
                    contUm++;
                }
            }
            printf("\n");
            if (contUm == n) { // se tiver alguma linha inteira só com um
                FazDeNovo++; // incrementa o contador
            }
        }
        if (FazDeNovo != 0){ // se o contador não for 0
            continua++; // incrementa a variável do while
        }
        continua--; // se todos os passos forem feitos, continua--;
        if (continua != 0) { // se for para fazer os passos de novo,
            printf("\n"); // imprime a quebra de linha pra proxima matriz
        }
        }
    return 0;
}