#include<stdio.h>
int main()
{
    char str[100];
    int i;
    int space=0;
    scanf("%[^
]s",str);
    i=0;
    while(i<=str[i])
    {
        if(str[i]==' ')
        {
            space++;
        }
        i++;
    }
    printf("%d",space);
    return 0;
}