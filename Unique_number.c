#include<stdio.h>
int main()
{
    int n,z=0,o=0,t=0,th=0,f=0,fi=0,s=0,se=0,e=0,ni=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%10==0)
        {
            z++;
        }
        else if(n%10==1)
        {
            o++;
        }
        else if(n%10==2)
        {
            t++;
        }
        else if(n%10==3)
        {
            th++;
        }
        else if(n%10==4)
        {
            f++;
        }
        else if(n%10==5)
        {
            fi++;
        }
        else if(n%10==6)
        {
            s++;
        }
        else if(n%10==7)
        {
            se++;
        }
        else if(n%10==8)
        {
            e++;
        }
        else if(n%10==9)
        {
            ni++;
        }
        n=n/10;
    }
    if(z<2 && o<2 && t<2 && th<2 && f<2 && fi<2 && s<2 && se<2 && e<2 && ni<2)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}