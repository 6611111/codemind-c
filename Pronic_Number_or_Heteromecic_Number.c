#include<stdio.h>
int main()
{
    int p,i,f=0;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        if(i*(i+1)==p)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}