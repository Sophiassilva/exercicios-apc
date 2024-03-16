#include <stdio.h>

int strlen_(const char s[])
{
    int i = 0;
    for (; s[i]; i++);
    return i;
}

struct tipoFiliacao {
    char nome[80], nomeMae[80], nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]) {
    struct tipoFiliacao dados;

    int i = 0, cont = 0, ultimocaractere = strlen_(linha); 

    while (linha[i] != ',') {
        dados.nome[cont] = linha[i]; // preenche o nome da pessoa até a primeira virgula
        i++;
        cont++;
    }
    dados.nome[cont] = '\0';

    i++; // atualiza pro caractere depois da virgula
    cont = 0; // zera o contador das strings da struct
    while (linha[i] != ',') {
        dados.nomeMae[cont] = linha[i]; 
        i++;
        cont++;
    }
    dados.nomeMae[cont] = '\0'; 

    i++;
    cont = 0;
    while (linha[i] != ',' && i != ultimocaractere) {
        dados.nomePai[cont] = linha[i]; 
        i++;
        cont++;
    }
    dados.nomePai[cont] = '\0'; 
   // printf("funcao nome %s, mae %s, pai %s\n", dados.nome, dados.nomeMae, dados.nomePai);
    return dados;
}

int main() 
{
    struct tipoFiliacao imprima = separaLinhaCSV("Pedro da Silva Pereira, Adriana da Silva, Guilherme Pereira");
    printf(" main nome %s, mae %s, pai %s\n", imprima.nome, imprima.nomeMae, imprima.nomePai);
    return 0;
}
