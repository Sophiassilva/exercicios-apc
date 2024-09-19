#include <stdio.h>

int validaPeso(double pesoKg)
{
    if (pesoKg < 0) {
        return 0;
    }
    else {
        return 1;
    }
}

void fazGrama(double pesoKg)
{
    double grama = pesoKg * 1000;
    int resultado = validaPeso(grama);
    if (resultado == 1) {
        printf("%.4lf\n", grama); }
}

void fazTonelada(double pesoKg)
{
    double tonelada = pesoKg / 1000;
    int resultado = validaPeso(tonelada);
    if (resultado == 1) {
        printf("%.4lf\n", tonelada); }
}



/* int main () {
    double p;
    scanf("%lf", &p);
    fazTonelada(p);
    fazGrama(p);
    return 0;
} */