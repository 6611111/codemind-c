#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=a/100;
if(b%2==0 && d%2==0 && e%2==0)
{
    printf("Even");
}
else if(b%2!=0 && d%2!=0 && e%2!=0)
{
    printf("Odd");
}
else
{
    printf("Mixed");
}
}