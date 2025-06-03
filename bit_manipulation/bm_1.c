// set the bit.

#include <stdio.h>

int main()
{
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    int bit_position;
    printf("Enter the bit position to set (0-indexed): ");
    scanf("%d", &bit_position);

    // Set the bit at the specified position
    num |= (1 << bit_position);

    printf("Number after setting bit %d: %d\n", bit_position, num);


    return 0;    
}