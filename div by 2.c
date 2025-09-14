#include <stdio.h>
int main()
//even - 1
//odd - 0
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    printf("%d", a%2==0);      //1 = true , 0=false
    return 0;
}