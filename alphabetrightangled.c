#include<stdio.h>
int main()
{
    int i,j,bigalphabet=65,smallalphabet=97,num;
    printf("enter number of rows");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    for(j=0;j<=i;j++)
    {
    printf("%c%c\t",bigalphabet,smallalphabet);
    bigalphabet++;
    smallalphabet++;
    }
    printf("\n");
    }
    return 0;
}