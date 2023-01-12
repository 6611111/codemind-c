#include<stdio.h>
int main()
{
    int i,n,j,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int tc=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                tc++;
            }
        }
        if(tc==9)
        {
           c++;
           printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d",c);
}