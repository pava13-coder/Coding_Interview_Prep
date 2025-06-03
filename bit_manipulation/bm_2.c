// clear the bit

#include <stdio.h>


int main()
{
    printf("Enter the num: ");
    int num;
    scanf("%d", &num);

    printf("enter the bit position to clear: ");
    int bit_position;

    scanf("%d",&bit_position);

    num &= ~(1 << bit_position);
    printf("Number after clearing bit %d: %d\n", bit_position, num);


    return 0;
}