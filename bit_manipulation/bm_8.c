// turn off  right most bit

#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("Enter the number: ");
    uint32_t number;
    scanf("%u", &number);

    uint32_t answer = (number & (number - 1));
    printf("the answer is %u", answer);

    return 0;

}