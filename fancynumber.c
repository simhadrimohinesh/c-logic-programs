#include<stdio.h>
int main()
{
    int num,remainder,evencount=0,oddcount=0;
    int t;
    printf("enter test cases\n");
    scanf("%d",&t);
    while(t>0)
    {
        printf("enter number:\n");
        scanf("%d",&num);
        while(num>0)
        {
            remainder=num%10;
            if(remainder%2==0)
            evencount++;
            else
            oddcount++;
            num=num/10;
        }
        if(evencount==oddcount)
        printf("Fancy number\n");
        else
        printf("Not Fancy number\n");
    t--;
    }
return 0;
}