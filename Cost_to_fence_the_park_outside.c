#include<stdio.h>
int main()
{
    int l,b,w,g,a,d,e,c;
    scanf("%d%d%d%d",&l,&b,&w,&g);
    a=l*b;
    c=(l+2*w)*(b+2*w);
    d=c-a;
    e=g*d;
    printf("%d",e);
}