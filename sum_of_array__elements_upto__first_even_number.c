#include<stdio.h>
int main()
{
    int n,arr[50],i,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum=sum+arr[i];
        }
        else
        break;
    }
    printf("%d",sum);
    return 0;
}    
