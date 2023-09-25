#include <stdio.h>
#include <stdlib.h>
#define qntd 3
struct produtos
{
    int quantidade;
    float preco;
};
int main()
{
    int contador;
    struct produtos produtos[qntd];
    float valorArrecadadoProduto[qntd], valorArrecadado=0;
    for(contador=0;contador<qntd;contador++)
    {
        printf("Entre com o preco do produto: ");
        scanf("%f", &produtos[contador].preco);
        printf("Entre com a quantidade de venda deste produto: ");
        scanf("%d", &produtos[contador].quantidade);
        valorArrecadadoProduto[contador] = produtos[contador].preco * produtos[contador].quantidade;
        valorArrecadado = valorArrecadado + valorArrecadadoProduto[contador];
    }
      for(contador=0;contador<qntd;contador++)
    {
        printf("\nO produto %d arrecadou %.2f", contador, valorArrecadadoProduto[contador]);
    }
    printf("\n\nO valor total arrecadado eh de: %.2f", valorArrecadado);
    return 0;
}