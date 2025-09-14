#include<stdio.h>

void Namaste();
void Bonjour();

int main()
{
    char ch;
    printf("Enter f for french and i for indian:");
    scanf("%c",&ch);
    if (ch == 'f')
    {
        Bonjour();
    }
    else 
    {
        Namaste();
    }
}

void Namaste()
{
printf("Namaste!");
}

void Bonjour()
{
    printf("Bonjour!");
}