#include<stdio.h>
int main()
{
    char ch;
    char str[50];
    printf("enter string\n");
    scanf("%s",str);
    printf("enter character:\n");
    scanf("\n");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
            str[i]=ch-32;
        }
    }
    printf("%s",str);    
    return 0;
}