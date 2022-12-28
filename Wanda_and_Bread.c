#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&m,&k);
    if(n<=m*k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}