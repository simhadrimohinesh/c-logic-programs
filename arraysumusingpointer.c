#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i,sum=0;
    printf("enter size of array:\n");
    scanf("%d",&n);
    a=(int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter elements\n");
        scanf("%d",a+i);
    }
    printf("elements in array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(a+i);
    }
    printf("\nsum of arrays: %d",sum);
    free(a);
    return 0;
}