#include<stdio.h>
int main()
{
    int i,j,size;
    int arr[100];
    printf("how many numbers:\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("enter elements :\n");
        scanf("%d",&arr[i]);

    }
    int count=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        { 
                if(arr[i]==arr[j] && i!=j)
                {
                count++;
                break;
                }
        }
    }
    if(count==0)
    printf("UNIQUE\n");
    else
    printf("DUPLICATE\n");
    return 0;
}