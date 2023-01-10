#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    char max='A';
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
    }
    printf("%c",max);
}