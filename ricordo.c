#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NNUMERI 90
#define NESTRATTI 5
#define NMAX 50

void estrazione(int estratti[]);

int main()
{
    int M=0;
    int estratti[5]={0.};
    srand48(time(NULL));
    while(M<1 || M>90)
    {
        printf("inserire un numero massimo di estrazioni comporeso tra 1 e 90\n");
        scanf("%d", &M);
    }
    estrazione(estratti);
}

void estrazione(int estratti[])
{
    int i=0;
    int k=0;
    int numero[5]={0.};
    //riempimento array
    for(i=0;i<5;i++)
    {
        numero[i]=lrand48()%90+1;
        printf("%d\n",numero[i]);
        if(i==4)
        {
            printf("----\n");
        }
    }
    //controllo unicità numerica
    for(i=0;i<5;i++)
    {
        for(k=0;k<5;k++)
        {
            if(numero[i]==numero[c+1] && i<4);
            numero[i]=lrand48()%90+1;
            //inserisco solamente un if e non un for perché la probabilità che escano 3 numeri uguali con due estrazioni omodestatiche è 1/90^3, quindi molto vicina a 0
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n", numero[i]);
    }

}
