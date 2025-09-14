#include <stdio.h>
int main()
{
    // you have to write numbers and the code will end when u enter a odd number
    int n;
    do
    {
        printf("Enter n:");
        scanf("%d",&n);
        printf("%d\n",n);

        if( n % 2 != 0)
        {
            break;
        }
    }
    while(1);
    printf("Thank You");
    return 0;
}