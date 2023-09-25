#include <stdio.h>
int contador1 =0;
int contador2 =0;
void placar()
{
   printf("Placar %d a %d", contador1,contador2);
}
int escolhaJogo(int opcao)
{
    switch(opcao)
    {
        case 1:
        printf("Voce escolheu Futebol! \n");
        break;

        case 2:
        printf("Voce escolheu League of Legends! \n");
        break;

        case 3:
        printf("Voce escolheu Valorant! \n");
        break;

        case 4:
        printf("Voce escolheu Basquete! \n");
        break;
    }
    return opcao;
}
int lol()
{   
    printf("PRIMEIRA PERGUNTA: \n");

}
int futebol()
{
    int opcao1, opcao2;
    printf("PRIMEIRA PERGUNTA: \n");
    printf("Qual o maior estadio do brasil atualmente? \n");
    printf("\n[1] - Morumbi\n[2] - Mane Garrincha\n[3] - Maracana\n[4] - Arena Castelao \n");
    scanf("%d %d", &opcao1, &opcao2);

     switch(opcao1)
    {
        case 1:
        printf("Voce errou! \n");
        break;

        case 2:
        printf("Voce errou! \n");
        break;

        case 3:
        printf("Voce acertou! \n");
        contador1++;
        break;

        case 4:
        printf("Voce errou! \n");
        break;
    }
     switch(opcao2)
    {
        case 1:
        printf("Voce errou! \n");
        break;

        case 2:
        printf("Voce errou! \n");
        break;

        case 3:
        printf("Voce acertou! \n");
        contador2++;
        break;

        case 4:
        printf("Voce errou! \n");
        break;
    }
    printf("SEGUNDA PERGUNTA: \n");
    printf("Dentre estes, qual tem mais gols no brasileirao? \n");
    printf("\n[1] - Romario\n[2] - Edmundo\n[3] - Fred\n[4] - Zico\n");
    scanf("%d %d",&opcao1,&opcao2);
      switch(opcao1)
    {
        case 1:
        printf("Voce errou! \n");
        break;

        case 2:
        printf("Voce errou! \n");
        break;

        case 3:
        printf("Voce acertou! \n");
        contador1++;
        break;

        case 4:
        printf("Voce errou! \n");
        break;
    }
     switch(opcao2)
    {
        case 1:
        printf("Voce errou! \n");
        break;

        case 2:
        printf("Voce errou! \n");
        break;

        case 3:
        printf("Voce acertou! \n");
        contador2++;
        break;

        case 4:
        printf("Voce errou! \n");
        break;
    }
    printf("TERCEIRA PERGUNTA: \n");
    printf("Qual o maior vencedor da COPA DO BRASIL? \n");
    printf("[1] - Gremio\n[2] - Sao Paulo\n[3] - Cruzeiro\n ");
    scanf("%d %d",&opcao1,&opcao2);
    switch(opcao1)
    {
        case 1:
        printf("Voce errou! \n");
        break;

        case 2:
        printf("Voce errou! \n");
        break;

        case 3:
        printf("Voce acertou! \n");
        contador1++;
        break;

        case 4:
        printf("Voce errou! \n");
        break;
    }
     switch(opcao2)
    {
        case 1:
        printf("Voce errou! \n");
        break;

        case 2:
        printf("Voce errou! \n");
        break;

        case 3:
        printf("Voce acertou! \n");
        contador2++;
        break;

        case 4:
        printf("Voce errou! \n");
        break;
    }
}
int main()
{
    int opcao;
    printf("JOGO DE PERGUNTAS PARA 1V1: \n");
    printf("SOBRE QUAL TEMA VC DESEJA JOGAR? \n");
    printf("[1] - Futebol\n[2] - League of Legends\n[3] - Valorant\n[4] - Basquete \n");
    scanf("%d", &opcao);
    escolhaJogo(opcao);
    if(escolhaJogo(opcao)==1)
    {
       futebol();
       placar();
    }
    return 0;
}