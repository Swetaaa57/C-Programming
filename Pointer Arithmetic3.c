#include <stdio.h>

int main()
{
    char star = '*';
    char *ptr = &star;
    printf("char = %u\n",ptr);
    ptr++;
    printf("char = %u\n",ptr); //char is of 1 byte
    ptr--;
    printf("char = %u",ptr);
}