#include <stdio.h>

//Avg Percentage

int marks(int science, int maths,int sanskrit);

int main()
{
    int science = 98;
    int maths = 95;
    int sanskrit = 99;
    printf("percentage is : %d",marks(science,maths,sanskrit));
}

int marks(int science, int maths,int sanskrit)
{
    return (( science + maths + sanskrit ) / 3 );
}