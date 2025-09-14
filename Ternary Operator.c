#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    age>=18 ? printf("Adult") : printf("Not Adult"); //ternary op. can be used instead of if,else
    return 0;
}