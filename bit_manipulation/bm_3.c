// toggle the bit

#include <stdio.h>

int main()
{
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    printf("Enter the bit position to toggle (0-indexed): ");
    int bit_position;
    scanf("%d", &bit_position);

    // Toggle the bit at the specified position
    num ^= (1 << bit_position);

    printf("Number after toggling bit %d: %d\n", bit_position, num);

    return 0;
}