#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia) 
{
    double horas = tB - tA;
    horas = horas / 3600;
    double kmh = distancia / horas;
    return kmh;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima) 
{
    int kmh = calculaVelocidadeMedia(tA, tB, distancia);
    if (kmh > velocidadeMaxima) {
        return 1;
    }
    else {
        return 0;
    }
}

/* int main()
{
    int i = 0;
    scanf("%d", &i);
    if (i == 1) {
        int a, b;
        double c;
        scanf(" %d,%d,%lf", &a, &b, &c);
        double resultado = calculaVelocidadeMedia(a, b, c);
        printf("velocidade %lf\n", resultado);
    }
    else if (i == 2) {
        int a, b;
        double c, d;
        scanf(" %d,%d,%lf,%lf", &a, &b, &c, &d);
        int resultado = levouMulta(a, b, c, d);
        printf("multa %d\n", resultado);
    }

    return 0;
} */