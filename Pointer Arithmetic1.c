#include <stdio.h>

int main()
{
    int age=22;
    int *ptr = &age;
    printf("int = %u\n",ptr);
    ptr++;
    printf("int = %u\n",ptr);
    ptr--;
    printf("int = %u\n",ptr); //increased by 4 bytes because pointer contains 4 bytes each
}