#include<stdio.h>
int main()
{
    int n,m,i,j,s1=0,s2=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==m-1)
            {
                s1=s1+a[i][j];
            }
            else
            {
                s2=s2+a[i][j];
            }
        }
    }
    printf("%d",s2);
}