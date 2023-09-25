#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int definirMovimentoTartaruga(int numeroAleatorio)
{
    if (numeroAleatorio  <= 5)
    {
        return 3;
    }
    else
    {
        if (numeroAleatorio  <= 7)
        {
            return -6;
        }
        else
        {
            return 1;
        }
    }
}

int definirMovimentoLebre(int numeroAleatorio)
{
    if (numeroAleatorio  <= 2)
    {
        return 0;
    }
    else
    {
        if (numeroAleatorio  <= 4)
        {
            return 9;
        }
        else
        {
            if (numeroAleatorio  == 5)
            {
                return -12;
            }
            else
            {
                if (numeroAleatorio  <= 8)
                {
                    return 1;
                }
                else
                {
                    return -2;
                }
            }
        }
    }
}

int validarPosicaoAnimal(int posicaoAnimal)
{
    if (posicaoAnimal < 1) return 1;
    return posicaoAnimal;
}

void imprimirCorrida(int posicaoLebre, int posicaoTartaruga)
{
    int posicaoAtual;
    for (posicaoAtual  = 1; posicaoAtual  <= 70; posicaoAtual ++)
    {
        if ((posicaoLebre == posicaoAtual ) && (posicaoTartaruga == posicaoAtual ))
        {
            printf("Ouch!");
        }
        else
        {
            if (posicaoTartaruga == posicaoAtual )
            {
                printf("T");
            }
            else
            {
                if (posicaoLebre == posicaoAtual )
                {
                    printf("L");
                }
                else
                {
                    printf("-");
                }
            }
        }
    }
    fflush(stdout);
    system("sleep 0.2");
    system("clear");
}

void imprimirResultado(int posicaoLebre, int posicaoTartaruga)
{
    if (posicaoLebre > posicaoTartaruga)
    {
        printf("\n\nA Lebre venceu!");
    }
    else
    {
        if (posicaoTartaruga > posicaoLebre)
        {
            printf("\n\nA Tartaruga venceu!");
        }
        else
        {
            printf("\n\nEmpatou!!!");
        }
    }
}

int main()
{
    int posicaoLebre = 1, posicaoTartaruga = 1, numeroAleatorio , posicaoAtual ;
    system("clear");
    srand(time(NULL));
    while ((posicaoTartaruga < 70) && (posicaoLebre < 70))
    {
        numeroAleatorio  = (random()%10) + 1;
        posicaoTartaruga = posicaoTartaruga + definirMovimentoTartaruga(numeroAleatorio);
        posicaoTartaruga = validarPosicaoAnimal(posicaoTartaruga);
        numeroAleatorio  = (random() % 10) + 1;
        posicaoLebre = posicaoLebre + definirMovimentoLebre(numeroAleatorio);
        posicaoLebre = validarPosicaoAnimal(posicaoLebre);
        imprimirCorrida(posicaoLebre, posicaoTartaruga);
    }
    imprimirResultado(posicaoLebre, posicaoTartaruga);
    return 0;
}