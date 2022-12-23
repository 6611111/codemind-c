#include<stdio.h>
int main()
{
    float u,b,c,s,tb;
    scanf("%f",&u);
    if(u<200)
    {
        b=1.20;
    }
    else if(u>=200 && u<400)
    {
        b=1.50;
    }
    else if(u>=400 && u<600)
    {
        b=1.80;
    }
    else if(u>=600)
    {
        b=2.0;
    }
    c=u*b;
    if(c<400)
    {
        s=100;
    }
    else
    {
        s=0.15*c;
    }
    tb=s+c;
    {
        printf("%0.2f",tb);
    }
}