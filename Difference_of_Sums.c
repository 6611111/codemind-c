#include<stdio.h>
int main()
{
    int n,i,s1=0,s2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s1+=i*i;
        s2+=i;
    }
    printf("%d",s2*s2-s1);
}
