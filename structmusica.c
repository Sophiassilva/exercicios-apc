#include <string.h>
#include <stdio.h>

struct tipoMusica {
    char nome[80];
    int ano;
};

struct tipoBanda {
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];
};

void pesquisarNomeMusica(char pesquisa[], struct tipoBanda bandas[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++){ // info de cada banda
        for (int j = 0; j < bandas[i].qtd; j++) { // info de cada banda
            if (strcmp(pesquisa, bandas[i].musicas[j].nome) == 0) {
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
                contador++;
            }
        }
    }
    if (contador == 0) {
        printf("Musica nao cadastrada\n");
    }
}