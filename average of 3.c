#include <stdio.h>
int main()
{
    int a,b,c,average;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    average = (a+b+c)/3;
    printf("average is : %d",average);
}