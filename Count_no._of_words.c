#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,tw=1;
    scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        if(str[i]==' ' || str[i]=='
' || str[i]==NULL)
        {
            tw++;
        }
        i++;
    }
    printf("%d",tw);
}