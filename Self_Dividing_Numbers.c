#include<stdio.h>
int main()
{
    int a,b,i,c,r,q,t;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        t=0;
        q=i;
        while(q!=0)
        {
            c=c+1;
            r=q%10;
            if(r!=0 && i%r==0)
            {
                t=t+1;
            }
            q=q/10;
        }
        if(c==t)
        {
            printf("%d ",i);
        }
    }
}