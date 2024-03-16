#include <stdio.h>

struct tipoLogradouro {
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240]) {
    int i = 0, cont = 0;

    while (info.tipo[i] != '\0') {
        linha[cont] = info.tipo[i]; //preenche a primeira parte
        i++;
        cont++;
    }
    linha[cont] = ';'; // coloca o ; separando
    cont++;

    i = 0;
    while (info.nome[i] != '\0') {
        linha[cont] = info.nome[i]; 
        i++;
        cont++;
    }
    linha[cont] = ';'; // separa
    cont++;

    i = 0;
    while (info.complemento[i] != '\0') {
        linha[cont] = info.complemento[i]; 
        i++;
        cont++;
    }
    linha[cont] = '\0'; 
    // printf("%s\n", linha); // checando
    return;
};

int main(){
    struct tipoLogradouro info = { 
        .tipo = "Rua", 
        .nome = "Afonso Camargo", 
        .complemento = "Loja B" };

    char linha[240];

    criaLinhaCSV(info, linha);
    printf("%s", linha);
    return 0;
}
