#include <stdio.h>
#include <stdlib.h>

void ordenarVetor(int vetorInteiros[])
{
    int auxiliar=0;
     for(int contador=0;contador<5;contador++)
    {
        for(int adjacente = contador+1 ; adjacente<5; adjacente++)
        {
            if(vetorInteiros[contador]<vetorInteiros[adjacente])
            {
                auxiliar = vetorInteiros[contador];
                vetorInteiros[contador] = vetorInteiros[adjacente];
                vetorInteiros[adjacente] = auxiliar;
            }
        }
    }
}

int main()
{
    int vetorInteiros[5];
    for(int contador=0;contador<5;contador++)
    {
        vetorInteiros[contador] =  rand()%20;
        printf("%d\n", vetorInteiros[contador]);
    }
    printf("\n\n");
    ordenarVetor(vetorInteiros);
    for(int contador=0;contador<5;contador++)
    {
        printf("%d\n", vetorInteiros[contador]);
    }
    return 0;
}