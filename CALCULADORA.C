#include <stdio.h>
#include <stdlib.h>

int primeiraOperacao = 1;

float adicao(int *primeiraOperacao, float resultado)
{
    float n1, n2;
    if (*primeiraOperacao == 1)
    {
        *primeiraOperacao = 0;
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        resultado = resultado + n1 + n2;
    }
    else
    {
        printf("\nDigite o numero: ");
        scanf("%f", &n1);
        resultado = resultado + n1;
    }
    printf("\nResultado: %.2f\n\n ", resultado);
    return resultado;
}

float subtracao(int *primeiraOperacao, float resultado)
{
    float n1, n2;
    if (*primeiraOperacao == 1)
    {
        *primeiraOperacao = 0;
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        resultado = resultado - n1 - n2;
    }
    else
    {
        printf("\nDigite o numero: ");
        scanf("%f", &n1);
        resultado = resultado - n1;
    }
    printf("\nResultado: %.2f\n\n ", resultado);
    return resultado;
}

float multiplicacao(int *primeiraOperacao, float resultado)
{
    float n1, n2;
    if (*primeiraOperacao == 1)
    {
        *primeiraOperacao = 0;
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        resultado = resultado * n1 * n2;
    }
    else
    {
        printf("\nDigite o numero: ");
        scanf("%f", &n1);
        resultado = resultado * n1;
    }
    printf("\nResultado: %.2f\n\n ", resultado);
    return resultado;
}

float divisao(int *primeiraOperacao, float resultado)
{
    float n1, n2;
    if (*primeiraOperacao == 1)
    {
        *primeiraOperacao = 0;
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        resultado = resultado / n1 / n2;
    }
    else
    {
        printf("\nDigite o numero: ");
        scanf("%f", &n1);
        resultado = resultado / n1;
    }
    printf("\nResultado: %.2f\n\n ", resultado);
    return resultado;
}

void menu()
{
    float resultado = 0;
    int opcao;

    do
    {
        printf("<------Calculadora com Menu----->\n");
        printf("Opções:\n");
        printf("\n[1] - Adição");
        printf("\n[2] - Subtração");
        printf("\n[3] - Divisão");
        printf("\n[4] - Multiplicação");
        printf("\n[5] - Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            resultado = adicao(&primeiraOperacao, resultado);
            break;

        case 2:
            resultado = subtracao(&primeiraOperacao, resultado);
            break;

        case 3:
            resultado = divisao(&primeiraOperacao, resultado);
            break;

        case 4:
            resultado = multiplicacao(&primeiraOperacao, resultado);
            break;

        case 5:
            printf("\nFinalizando...\n\n");
            printf("Resultado final: %.2f", resultado);
            break;

        default:
            printf("\nComando inválido, tente novamente!\n\n");
            break;
        }
    } while (opcao != 5);
}

int main()
{
    menu();
    return 0;
}
