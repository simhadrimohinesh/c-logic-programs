#include<stdio.h>
void display(int x,int y);
void main()
{
    int n,m;
    printf("enter range:\n");
    scanf("%d %d",&n,&m);
    display(n,m);
}
void display(int x,int y)
{
    if(x>y)
    return;
    else
    {
    printf("%d\n",x);
    display(x+1,y);
    }
}