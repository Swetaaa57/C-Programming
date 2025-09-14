#include <stdio.h>

int main()
{
    int age = 21;
    int _age = 25;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Difference = %u\n", ptr-_ptr); //(1004 - 1000) / sizeof(int)
    _ptr = &age;                            //= 4 / 4
                                            //= 1 .Here we are talking about pointers not the values(values doesnt matter in this case)
    printf("Comparition = %u",ptr == _ptr);  // 1 means True here
}