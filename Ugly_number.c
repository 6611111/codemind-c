#include<stdio.h>
int main()
{
    int n,q,c=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        if(q%2==0)
        {
            q=q/2;
        }
        else if(q%3==0)
        {
            q=q/3;
        }
        else
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        if(q==1)
        {
            printf("Ugly Number");
        }
        else
        {
            printf("Not Ugly Number");
        }
    }
    else
    {
        printf("Ugly Number");
    }
}