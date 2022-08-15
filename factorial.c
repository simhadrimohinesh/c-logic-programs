#include<stdio.h>
int main()
{
    int n,fact=1,i=1;
    printf("enter the number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    return 0;
}