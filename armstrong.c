#include<stdio.h>
int main()
{
    int num,remainder,sum=0,temp;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    for(temp=num;num!=0;num=num/10)
    {
        remainder=num%10;
        sum+=remainder*remainder*remainder;
    }
    if(temp==sum)
    printf("ARMSTRONG NUMBER\n");
    else
    printf("NOT ARMSTRONG NUMBER\n");
    return 0;
}