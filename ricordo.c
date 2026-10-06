#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NNUMERI 90
#define NESTRATTI 5
#define NMAX 50

void estrazione(int estratti[]);
void print_array(int M,int estratti[],int i);

int main()
{
    int M=0;
    int i=0;
    int estratti[NESTRATTI]={0.};
    srand48(time(NULL));
    while(M<1 || M>90)
    {
        printf("inserire un numero massimo di estrazioni comporeso tra 1 e 90\n");
        scanf("%d", &M);
    }

    for(i=0;i<M;i++)
    {
    //printf("----\n");
    estrazione(estratti);
    print_array(M,estratti,i);
    }
}

void estrazione(int estratti[])
{
    int i=0;
    int k=0;
    //riempimento array
    for(i=0;i<5;i++)
    {
        estratti[i]=lrand48()%90+1;
       // printf("%d\n",estratti[i]);
       /* if(i==4)
        {
            printf("----\n");
        }*/
    }
    //controllo unicità numerica
    for(i=0;i<5;i++)
    {
        for(k=i;k<5;k++)
        {
            if(estratti[i]==estratti[k+1])
            {
                estratti[i]=lrand48()%90+1;
            }
            //inserisco solamente un if e non un for perché la probabilità che escano 3 numeri uguali con due estrazioni omodestatiche è 1/90^3, quindi molto vicina a 0
        }
    }
   /* for(i=0;i<5;i++)
    {
        printf("%d\n", estratti[i]);
    }
    */
}

void print_array(int M, int estratti[], int i)
{
        printf("----\n");
        printf("turno estrazione: %d\n", i+1);
        printf("numeri estratti:\n");
        for(i=0;i<NESTRATTI;i++)
        {
           printf("%d\n", estratti[i]);
        }
}
