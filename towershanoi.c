#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void towers(int, char, char, char);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int num; 
    //printf("Enter the number of disks :\n");
    scanf("%d", &num);
    //printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'B', 'C');
    return 0;
}
void towers(int num, char source, char target, char temp)
{
    if (num == 1)
    {
        printf("Moving ring 1 from %c to %c\n",source, target);
        return;
    }
    towers(num - 1, source, temp, target);
    printf("Moving ring %d from %c to %c\n", num, source, target);
    towers(num - 1, temp, target, source);
}