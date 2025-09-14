#include <stdio.h>

void string(char arr[]);

int main()
{
    char fullName[100];
    printf("Enter your full name:");
    scanf("%s",fullName);  //if you write Tony Stark it will only give you Tony because scanf can't input multiword strings with spaces
    printf("Your fullname is %s",fullName);  //you have to input gets() and puts() here
}

void string(char arr[])
{
    for(int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}