#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter i and n values\n");
    scanf("%d %d",&i,&n);
    while(i<=n)
    {
        if(i%5==0&&i%2==0)
        printf("ADCSKLM\n");
        else if(i%5==0&&i%2!=0)
        printf("MOHINESH\n");
        else
        printf("%d\n",i);
        i++;
    }
    return 0;
}
