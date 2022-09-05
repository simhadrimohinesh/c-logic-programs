#include<stdio.h>
void scanarray(int arr[],int i,int len);
void printarray(int arr[],int i,int len);
void main()
{
    int arr[100];
    int n;
    printf("enter size:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    scanarray(arr,0,n);
    printf("elements in array:\n");
    printarray(arr,0,n);
}
void scanarray(int arr[],int i,int len)
{
    if(i>=len)
    return;
    else
    {
    scanf("%d",&arr[i]);
    scanarray(arr,i+1,len);
    }
}
void printarray(int arr[],int i,int len)
{
    if(i>=len)
    return;
    else
    {
    printf("%d\t",arr[i]);
    printarray(arr,i+1,len);
    }

}