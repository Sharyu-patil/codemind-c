#include<stdio.h>
int main()
{
    int n,arr[50],i,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(arr[i]==k)
         break;
    }
    printf("%d",sum);
    return 0;
}
