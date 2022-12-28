#include<stdio.h>
int main()
{
    int i,j,n,s=0;
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
    float avg;
    avg=s/(float)n;
    printf("%0.2f",avg);
    
}