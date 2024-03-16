#include <stdio.h>

int faz_conta_direito(int parcelas, char op) // recebe o numero de entradas e operador
{
    int entrada = 0, i = 1;

    // atribui a primeira entrada a variavel
    scanf("%d", &entrada); 
    int resultado = entrada;

    while (i < parcelas) { 
        scanf("%d", &entrada); // lê o resto das entradas
        if (op == '+') { // se or for +, soma
            resultado+= entrada;
        }
        else if (op == '-') { // se op for -, subtrai
            resultado-= entrada;
        }
        i++;
    }
    return resultado; // retorna valor final
}

/* int main()
{
    int n = faz_conta_direito(4, '');
    printf("%d", n);
    return 0;
} */
