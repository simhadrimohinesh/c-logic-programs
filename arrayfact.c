#include<stdio.h>
int main()
{
    int size;
    int arr[size];
    int fact;
    int sum=0;
    int j;
    printf("enter how many elements:");
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {   
        fact=1;
        if(arr[i]==0)
        fact=0;
        for(j=arr[i];j>1;j--)
        {
            fact=fact*arr[i];
            arr[i]--;
        }
        sum=sum+fact;  
    }
    printf("sum of factorials=%d\n",sum);
    return 0;
}