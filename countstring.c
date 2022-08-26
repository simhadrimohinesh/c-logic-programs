#include<stdio.h>
int main()
{
    char s[100];
    int uppercount,lowercount,numcount;
    printf("Enter string:\n");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        uppercount++;
        else if(s[i]>=97 && s[i]<=122)
        lowercount++;
        else if(s[i]>=48 && s[i]<=57)
        numcount++;
    }
    printf("the uppercase count of character is %d\n",uppercount);
    printf("the lowercase count of character is %d\n",lowercount);
    printf("the numcount count of character is %d\n",numcount);
    return 0;
}