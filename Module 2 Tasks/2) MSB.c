#include <stdio.h>

int main()
{
    int input, msb;
    
    printf("Enter any number: ");
    scanf("%d", &input);

    msb = 1 << 3;

    if(input & msb)
        printf("MSB bit of %d is set", input);
    else
        printf("MSB bit of %d is not set", input);
    
    return 0;
}
