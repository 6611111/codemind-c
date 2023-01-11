#include<stdio.h>
int main()
{
    int hf,sf,sdf;
    scanf("%d%d%d",&hf,&sf,&sdf);
    int r;
    if(hf>50 && sf>60 && sdf>100)
    {
        printf("10");
    }
    else if(hf>50 && sf>60)
    {
        printf("9");
    }
    else if(sf>60 && sdf>100)
    {
        printf("8");
    }
    else if(hf>50 && sdf>100)
    {
        printf("7");
    }
    else if(hf>50 || sf>60 || sdf>100)
    {
        printf("6");
    }
    else 
    {
        printf("5");
    }
}