// count set bits in a byte

#include <stdio.h>
#include <stdint.h>

uint8_t count_set_bits(uint32_t byte)
{
    uint8_t count = 0;
    while(byte)
    {
        count += (byte & 1);
        byte >>= 1;
    }

    return count;
}

int main()
{
    uint32_t byte;
    printf("Enter a byte: ");
    scanf("%u", &byte);

    uint8_t set_bits = count_set_bits(byte);
    printf("Number of set bits in %u: %u\n", byte, set_bits);
    
    return 0;
}