#include <stdio.h>
int main()
{
    //increment operator
    // ++i = pre increment operator
    // i++ = post increment operator
    //same for i-- and --i

    int i=1;
    printf("%d ",i++);
    printf("%d\n",i);

    int j=1;
    printf("%d ",++j);
    printf("%d\n",j);
}