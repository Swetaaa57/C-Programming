#include <stdio.h>
int main()
{
    char a;
    printf("Enter:");
    scanf("%c",&a);
    if(a>='0' && a<='9')
    {
        printf("It is a digit:%c",a);
    }
    else
    {
        printf("It is not a digit:%c",a);
    }
}