#include<stdio.h>
int main()
{
    int n,i,s1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            s1=s1+a[i];
        }
    }
    printf("%d",s1);
}