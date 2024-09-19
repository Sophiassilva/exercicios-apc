double fatorial(int x)
{
    int num = x, i;
    double resultado = 1;
    for ( i = 1; i <= num; i++) {
        resultado *= i;
        
    }
   // printf(" fatorial %d = %lf\n", i, resultado);
    return resultado;
}

double elevaNumero(int x, int i) 
{
    int cont = i, j;
    double num = x, resultado = num;

    for (j = 1; j < cont; j++)
    {
        resultado *= num; 
    }
    /* printf("eleva numero %d =  %lf\n", i, resultado); */
    return resultado;
}

double exp_natural(int x, int n)
{
    int num = x, cont = n;
    double euler = 1;
    for (int i = 1; i <= cont; i++) 
    {
        euler += (elevaNumero(num, i)/fatorial(i));
      /* printf("euler %d = %lf\n", i, euler); */
    }
    return euler;
}

/* int main()
{
    int x = 0, n = 0;
    scanf("%d %d", &x, &n);

    double resultado = exp_natural(x, n);

    printf("resultado main %lf\n", resultado);

    return 0;

} */