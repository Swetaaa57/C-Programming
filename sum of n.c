#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int sum=0;
    for(
        int i=1;i<=n;i++
    )
    {
        sum+=i;
    }
    printf("Sum is:%d\n",sum);

    //reverse
    for(
        int i=n;i>=1;i--
    )
    {
        printf("%d\n",i);
    }
}