#include<stdio.h>
void fun(int *a,int n)
{
    int i,x;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        x=i;
    }
    printf("%d",x);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n);
}