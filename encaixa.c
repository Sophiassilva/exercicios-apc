#include <stdio.h>
#include <string.h>

/* int encaixa(int a, int b) {
   if (a == b) {
        return 1;
    }

    int cont = 0;

    while (b != 0) {
        if (a%10 == b%10) {
            a /= 10;
            b /= 10;
            cont++;
        }
        else {
            return 0;
        }
    }
    return 1;
} */

int encaixa(int a, int b) {
    int contMaior = 0, contMenor = 0;
    while (b%10!=0) {
        contMenor++;
    }
    while (a%10!=0) {
        contMaior++;
    }
    char Menor[contMenor], Maior[contMaior];

    for (int i = 0; i < contMenor; i++) {
        Menor[i] = (char) b%10;
        b /= 10;
    }

    for (int i = 0; i < contMaior; i++) {
        Maior[i] = (char) a%10;
        a /= 10;
    }

    char *resultado = strstr(Maior, Menor);

    if (resultado) {
        return 1;
    }
    else {
        return 0;
    }
}

int segmento(int a, int b) {
    int resultado = 0;
    if (a > b) {
        resultado = encaixa(a,b);
      //  printf("Resultado a > b = %d\n", resultado);
    }
    else if (b > a) {
        resultado = encaixa(b,a);
       // printf("Resultado b > a = %d\n", resultado);
    }
    return resultado;
}

/* int main () {

    int resSef= segmento(2457,245);
    printf("Main: Resultado Encaixa %d\n Segmento %d \n", resSef);
    return 0;
} */

/*
segmento recebe a e b
verifica qual e maiotr

encaix(maior, menor), enquanto maior > menor maior/=10
se o encaixa retornar 1 em qualqeur momento segmento retoirna 1
se encaixa nunca retornar 1, segmento retorna -0*/