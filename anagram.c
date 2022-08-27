#include <stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter strings:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    int len;
    int i,j,k=0,l=0;
    if(len1==len2)
    {
        len=len1;
        for(i=0;i<len;i++)
        {
            k=0;
            for(j=0;j<len;j++)
            {
                if(str1[i]==str2[j])
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                l=1;
                break;
            }
        }
        if(k==1)
        printf("not anagram\n");
        else
        printf("anagram\n");
        
    }
    else
    printf("not anagram\n");
    return 0;
}
