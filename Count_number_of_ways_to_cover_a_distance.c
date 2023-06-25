#include<stdio.h>
int cd(int n)
{
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return cd(n-1)+cd(n-2)+cd(n-3);
    }
}
int main()
{
    int n,r;
    scanf("%d",&n);
    r=cd(n);
    printf("%d",r);
}