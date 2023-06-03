#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lli",&n);
    int c=0;
    while(n>0)
    {
        c=c+1;
        n=n/10;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}