#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,v=0,c=0,d=0,ws=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            v++;
        }
        else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            c++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            d++;
        }
        else if(str[i]==' ')
        {
            ws++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d
",ws);
}