#include <stdio.h>
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    printf("%d\n",a>9 && a<100);
    return 0;
}