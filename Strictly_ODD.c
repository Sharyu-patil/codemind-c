#include<stdio.h>
int main()
{
    int n,i,count=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            if(i%2==0)
            {
                count++;
                break;
            }
        }
    }
    if(count==0)
    printf("True");
    else
    printf("False");
    return 0;
}