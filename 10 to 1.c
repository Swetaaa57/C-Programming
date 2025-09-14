#include <stdio.h>
int main()
{
    for (
        int i=10;
        i>=1;
        i-- //or i-=1
    )
    {
        printf("%d\n",i);
    }
}