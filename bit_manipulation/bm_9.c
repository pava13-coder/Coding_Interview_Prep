// turn on right most 0 bit in a number

#include <stdio.h>
#include <stdint.h>

#define MASK 1

int main()
{
    printf("enter number: ");
    uint32_t number;
    scanf("%u", &number);

    uint32_t answer = 1;
    uint32_t temp = number;

    if(number == 0) {
        printf("answer: %u\n", answer);
    }
    else
    {
        while(temp & MASK) 
        {
            temp >>= 1;
            answer <<= 1;
        }
        number |= answer;
        printf("answer: %u\n", number);
    }

    return 0;
}