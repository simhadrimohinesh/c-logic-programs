#include<stdio.h>
int main()
{
    int n,temp=0,i,first=0,second=1,count=0;
    printf("enter number");
    scanf("%d",&n);
    printf("%d %d ",first,second);
    if(n==0||n==1)
    printf("YES");
    while(temp<n)
    {
        temp=first+second;
        if(temp==n)
        {
            count=count+1;
            break;
        }
        first=second;
        second=temp;
    }
    if(count==0)
    printf("no");
    else
    printf("yes");
    return 0;
}