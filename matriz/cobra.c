#include <stdio.h>

// jogo da cobra, recebe uma cobra de tamanho n nas posições q e uma sequencia de movimentos para ela fazer até 
// bater ou encerrar o jogo

int main() {
    int matriz[10][10];
    int maior = 0, linha = 0, posicao = 0;
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                posicao = j;
            }
        }
    }

    char str;

    while(scanf("%c", str)!=EOF) {
        if (str == 's') {
            linha++;
            if (matriz[linha][posicao] == 0 && posicao <= 9 && posicao >= 0 && linha >= 0 && linha <= 9) {
                printf("Nao bateu\n");
            }
            else if(matriz[linha][posicao] != 0 && posicao <= 9 && posicao >= 0 && linha >= 0 && linha <= 9) {
                printf("Bateu em si mesma\n");
                return 0;
            }
            else if (linha < 0 || linha > 9){
                printf("Bateu na parede\n");
                return 0;
            }
            matriz[linha][posicao] = maior+1;
        }
        else if (str == 'w') {
            linha--;
            if (matriz[linha][posicao] == 0 && posicao <= 9 && posicao >= 0 && linha >= 0 && linha <= 9) {
                printf("Nao bateu\n");
            }
            else if(matriz[linha][posicao] != 0 && posicao <= 9 && posicao >= 0 && linha >= 0 && linha <= 9) {
                printf("Bateu em si mesma\n");
                return 0;
            }
            else if (linha < 0 || linha > 9) {
                printf("Bateu na parede\n");
                return 0;
            }
            matriz[linha][posicao] = maior+1;
        }

        else if (str == 'd') {
            posicao++;
            if (matriz[linha][posicao] == 0 && posicao <= 9 && posicao >= 0 && linha >= 0 && linha <= 9) {
                printf("Nao bateu\n");
            }
            else if(matriz[linha][posicao] != 0 && posicao <= 9 && posicao >= 0 && linha >= 0 && linha <= 9) {
                printf("Bateu em si mesma\n");
                return 0;
            }
            else if (posicao > 9 || posicao < 0) {
                printf("Bateu na parede\n");
                return 0;
            }
            matriz[linha][posicao] = maior+1;
        }
        
        else if (str == 'a') {
            posicao--;
            if (matriz[linha][posicao] == 0 && posicao <= 9 && posicao >= 0 && linha >= 0 && linha <= 9) {
                printf("Nao bateu\n");
            }
            else if(matriz[linha][posicao] != 0 && posicao <= 9 && posicao >= 0 && linha >= 0 && linha <= 9) {
                printf("Bateu em si mesma\n");
                return 0;
            }
            else if (posicao > 9 || posicao < 0) {
                printf("Bateu na parede\n");
                return 0;
            }
            matriz[linha][posicao] = maior+1;
        }
        else if (str == 'p') {
            printf("Venceu\n");
            return 0;
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (matriz[i][j] != 0) {
                    matriz[i][j]--;
                }
            }
        }
    }
}