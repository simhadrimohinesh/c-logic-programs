#include<stdio.h>
int main()
{
    
    int i,j,n,flag,arr[100];
    printf("enter array size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter array numbers");
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]!=1)
        {
        flag=0;
        for(j=2;j<n;j++)
        {
            if(arr[i]%j==0)
            flag=1;
            break;
        }
        if(flag==0)
        printf("%d\t",arr[i]);
        }
    }
    return 0;
}