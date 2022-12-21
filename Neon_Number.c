#include<stdio.h>
int main()
{
    int n,d,sum=0;
    scanf("%d",&n);
    int s=(n*n);
    while(s!=0)
    {
        d=s%10;
        sum+=d;
        s=s/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
