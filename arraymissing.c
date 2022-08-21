#include<stdio.h>
int main()
{
    int i,n,sum=0,miss;
    int arr[100];
    printf("enter no of arrays size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter consecutive numbers:\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    miss=sum-(n*(n+1)/2);
    printf("%d",miss);
return 0;
}
    