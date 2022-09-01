#include<stdio.h>
int even_or_odd(int a);
int main()
{
    int num;
    int result;
    printf("enter a number:\n");
    scanf("%d",&num);
    result=even_or_odd(num);
    if(result==0)
    printf("Even\n");
    else
    printf("Odd\n");
    
}
int even_or_odd(int a)
{
    if(a%2==0)
    return 0;
    else
    return 1;
}