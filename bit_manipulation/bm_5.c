// is power of 2

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t number;
    printf("Enter the number: ");
    scanf("%u",&number);

    uint32_t is_power_of_2 = (number != 0) && ( (number & (number - 1)) == 0);
    if (is_power_of_2) {
        printf("%u is a power of 2\n", number);
    } else {
        printf("%u is not a power of 2\n", number);
    }
    return 0;
}