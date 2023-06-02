#include<stdio.h>
int main()
{
    long long int sum;
    sum=0;
    int i,n;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lli",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%lli",sum);
    return 0;
}
