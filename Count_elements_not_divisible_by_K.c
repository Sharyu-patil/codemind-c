#include<stdio.h>
int main()
{
    int n,arr[50],i,count=0,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%k!=0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}    