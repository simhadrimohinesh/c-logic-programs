#include<stdio.h>
int main()
{
    int number,i,remainder,sum=0;
    printf("enter a number");
    scanf("%d",&number);
    i=1;
    while(i<number)
    {
        remainder=number%i;
        if(remainder==0)
        sum=sum+i;
        i++;
    }
    if(sum==number)
    printf("perfect number");
    else
    printf("not perfect number");
    return 0;
}
