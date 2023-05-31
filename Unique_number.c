#include<stdio.h>
int main()
{
    int temp,z=0,o=0,t=0,th=0,f=0,fi=0,s=0,se=0,e=0,n=0;
    scanf("%d",&temp);
    while(temp)
    {
        if(temp%10==0)
        {
            z++;
        }
        else if(temp%10==1)
        {
            o++;
        }
        else if(temp%10==2)
        {
            t++;
        }
        else if(temp%10==3)
        {
            th++;
        }
        else if(temp%10==4)
        {
            f++;
        }
        else if(temp%10==5)
        {
            fi++;
        }
        else if(temp%10==6)
        {
            s++;
        }
        else if(temp%10==7)
        {
            se++;
        }
        else if(temp%10==8)
        {
            e++;
        }
        else if(temp%10==9)
        {
            n++;
        }
        temp=temp/10;
    }
    if(z<2 && o<2 && t<2 && th<2 && f<2 && fi<2 && s<2 && se<2 && e<2 && n<2)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}