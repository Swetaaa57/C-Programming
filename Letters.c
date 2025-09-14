#include <stdio.h>
int main()
{
    char ch;
    printf("Enter letter:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Capital Letters\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Small Letters\n");
    }
    else
    {
        printf("Not a Letter");
    }
}