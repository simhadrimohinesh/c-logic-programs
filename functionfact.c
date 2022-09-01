#include<stdio.h>
int factorial(int x);
void main()
{
    int num;
    int result;
    printf("enter number:\n");
    scanf("%d",&num);
    result=factorial(num);
    printf("%d",result);
    
}
int factorial(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}
