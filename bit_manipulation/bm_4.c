// set/toggle/clear bit

#include <stdio.h>
#include <stdint.h>

uint32_t set_bit(uint32_t num, uint8_t bit_position)
{
    return num | (1 << bit_position);
}

uint32_t clear_bit(uint32_t num, uint8_t bit_position)
{
    return num & ~(1 << bit_position);
}

uint32_t toggle_bit(uint32_t num, uint8_t bit_position)
{
    return num ^ (1 << bit_position);
}

int main(){

    uint32_t num;
    uint8_t bit_position;

    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the bit position to set (0-indexed): ");
    scanf("%hhu", &bit_position);
    num = set_bit(num, bit_position);
    printf("Number after setting bit %d: %u\n", bit_position, num);

    printf("Enter the bit position to clear (0-indexed): ");
    scanf("%hhu", &bit_position);
    num = clear_bit(num, bit_position);
    printf("Number after clearing bit %d: %u\n", bit_position, num);

    printf("Enter the bit position to toggle (0-indexed): ");
    scanf("%hhu", &bit_position);
    num = toggle_bit(num, bit_position);
    printf("Number after toggling bit %d: %u\n", bit_position, num);

    return 0;
}