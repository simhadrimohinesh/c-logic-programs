#include<stdio.h>
int main()
{
    int arr[100];
    int i;
    int m;
    printf("array size");
    scanf("%d",&m);
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<m;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}