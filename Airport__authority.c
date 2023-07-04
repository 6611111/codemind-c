#include <stdio.h>
long int weightMachine(long int N,long int weights[],long int T)
{
    long int amount=0,i;
    for(i=0;i<N;i++)
    {
        amount++;
        if(weights[i]>T)
        {
            amount++;
        }
    }
    return amount;
}
int main()
{
    long int N,i,T;
    scanf("%ld",&N);
    long int weights[N];
    for(i=0;i<N;i++)
    {
        scanf("%ld",&weights[i]);
    }
    scanf("%ld",&T);
    printf("%ld",weightMachine(N,weights,T));

    return 0;
}