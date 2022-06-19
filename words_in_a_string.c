#include<stdio.h>
int main()
{
    char str[50],i,count=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' '&& str[i+1]!=' ')
        count++;
    }
    printf("%d",count+1);
    return 0;
}