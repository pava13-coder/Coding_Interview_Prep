// position of the right most set bit in a num.

#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("Enter a number: ");
    uint32_t number;
    scanf("%u", &number);

    // case 1 - number is zero
    if (number == 0) {
        printf("The number is zero, no set bits.\n");
        return 0;
    }

    // case 2 - number is not zero
    uint32_t rightmost_set_bit = number & -number; // Isolate the rightmost set bit
    uint32_t position = 0;
    while (rightmost_set_bit > 1) {
        rightmost_set_bit >>= 1; // Shift right to find the position
        position++;
    }
    printf("The position of the rightmost set bit is: %u\n", position);
    printf("The value of the rightmost set bit is: %u\n", number & -number);

    return 0;
}