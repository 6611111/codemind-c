#include<stdio.h>
int main()
{
    int n,i,s=0,s1=0,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            s1=s1+a[i];
        }
    }
    d=s-s1;
    printf("%d",d);
}