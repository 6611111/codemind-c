#include<stdio.h>
int main()
{
    int c=0;
    long long int n;
    scanf("%lli",&n);
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