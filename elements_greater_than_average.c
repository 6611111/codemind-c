#include<stdio.h>
int main()
{
    int n,i,b,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    b=s/n;
    for(i=0;i<n;i++)
    {
    if(b<=a[i])
    {
        c+=1;
    }
    }
    printf("%d",c);
}