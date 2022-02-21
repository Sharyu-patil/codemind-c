#include<stdio.h>
int main()
{
    int X,Y,res=0;
    scanf("%d%d",&X,&Y);
    res=X+2*Y;
    if(X==0&&Y%2==0)
    {
        printf("YES");
    }
    else if(X==0&&Y%2!=0)
    {
        printf("NO");
    }
    else if(res%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}