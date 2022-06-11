#include<stdio.h>
int main()
{
    int n,arr[50],i,count=0,x;
    scanf("%d",&n);
    x=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            count++;
        }
    }
    if(count==0)
    printf("yes");
    else
    printf("no");
    return 0;
}    