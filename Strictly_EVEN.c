#include<stdio.h>
int main()
{
    int n,i,s=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if (i%2==0)
       {
           if(a[i]%2==0)
           {
               s=s+1;
           }
       }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c=c+1;
        }
    }
    if(c==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}