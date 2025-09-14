#include <stdio.h>

int main()
{
    float price = 100.00;
    float *ptr = &price;
    printf("float = %u\n",ptr);
    ptr++;
    printf("float = %u\n",ptr);
    ptr--;
    printf("float = %u",ptr);
}