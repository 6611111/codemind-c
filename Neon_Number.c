#include<stdio.h>
int main()
{
    int a,b,s=0,r;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
       r=b%10;
       s=s+r;
       b=b/10;
    }
    if(s==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}