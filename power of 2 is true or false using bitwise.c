#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a==0)
    {
        printf("false\n");
    }
    else if((a&a-1)==0)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}

