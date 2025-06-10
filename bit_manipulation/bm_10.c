// find a set bit in number


#include <stdio.h>
#include <stdint.h>

uint8_t find_set_bit(uint32_t num);

int main()
{

    uint32_t num;
    printf("Enter a number: ");
    scanf("%u", &num);
    uint8_t position = find_set_bit(num);
    if (position == 0) {
        printf("No set bits found in the number %u.\n", num);
    } else {
        printf("The first set bit in the number %u is at position %u.\n", num, position);
    }
    return 0;
}


uint8_t find_set_bit(uint32_t num)
{
    if (num == 0) {
        return 0; // No set bits
    }

    uint8_t position = 1; // Position starts from 1
    while ((num & 1) == 0) {
        num >>= 1; // Right shift to check the next bit
        position++;
    }
    
    return position; // Return the position of the first set bit
}