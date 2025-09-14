#include <stdio.h>

void string(char arr[]);

int main()
{
    char firstName[] = "Tony";
    char lastName[] = "Stark";

    string(firstName);
    string(lastName);
    return 0;
}

void string(char arr[])
{
    for(int i=0; arr[i] != '\0'; i++) //it will stop when the null point come
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}