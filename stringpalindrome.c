#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter string;\n");
    scanf("%s",s);
    int count=0,f=1;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    for(int k=0;k<count;k++)
    {
        if(s[k]!=s[count-1-k])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    printf("palindrome\n");
    else
    printf("not palindrome\n");
    return 0;
}