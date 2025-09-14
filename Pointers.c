#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n",_age);

    //address
    printf("%p\n",&age);
    printf("%u\n",&age); //&u is for the better understandings because &p are harder to understand
    printf("%u\n",ptr);
    printf("%u\n",&ptr);

    //value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
}