#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        if(a[j]==a[i])
        {
            for(k=j;k<n;k++)
            {
                a[k]=a[k+1];
            }
            n--;
        }
        else
        j++;
    }
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}