#include<stdio.h>
int main()
{
    long long int n1,n2,i,s=0,gcd,lcm;
    scanf("%lld%lld",&n1,&n2);
    for(i=1;i<=n1,i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd=i;
        }
    }
    lcm=(n1*n2)/gcd;
    printf("%lld",lcm);
}
