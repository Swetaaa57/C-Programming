#include <stdio.h>
int main()
{
    int n;
    int i=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }

    //or

    for (
        int i=0;
        i<=n;
        i++
    )
    {
        printf("%d\n",i);
    }
    return 0;
}