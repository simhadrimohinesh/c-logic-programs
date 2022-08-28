#include<stdio.h>
#include<string.h>
void substring(char str[],int n)
{
int x,i,k,j;
for(i=0;i<=n;i++)
{
for(j=0;j<n-i;j++)
{
x=j+i;
for(k=j;k<=x;k++)
{
printf("%c",str[k]);
}
printf("\n");
}
}
}
int main()
{
char str[]="abcd";
substring(str,strlen(str));
return 0;
}
