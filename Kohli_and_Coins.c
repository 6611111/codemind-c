#include<stdio.h>
int main()
{
    int n,d,c=0,e,f;
    scanf("%d",&n);
    if(n%10==0)
    {
        d=n/10;
        c=c+d;
        printf("%d",c);
    }
    else if(n%5==0)
    {
        d=n/10;
        e=n%10;
        f=e/5;
        c=c+d+f;
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}