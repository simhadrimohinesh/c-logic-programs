#include<stdio.h>
int main() {
	int arr[4];
	int i;
	int count=0;
    for(i=0;i<4;i++)
    {
        printf("Enter array values:\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        if(arr[i]>=10)
        count++;
    }
    printf("more than 10 number the count are:\n");
    printf("%d ",count);
	return 0;
}
