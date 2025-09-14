#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    _swap(&x,&y);
    printf("x = %d & y = %d\n", x,y);
}

// call b reference
void _swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by value (no need)
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d\n",a,b);
}