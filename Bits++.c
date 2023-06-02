#include<stdio.h>
#include<string.h>
int main()
{
    int t,x=0,i;
    char ch[4];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",ch);
        if(ch[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d",x);
}