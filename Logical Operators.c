#include <stdio.h>
int main()                        // 1 = TRUE , 0 = FALSE
{
    printf("%d\n",4>3 && 5>2);    //  p    q     &&(and)    ||(or)
    printf("%d\n",3>4 && 5>2);    //  T    T       T          T
    printf("%d\n",3>4 || 5>2);    //  T    F       F          T
    printf("%d\n",4>3 || 5>2);    //  F    T       F          T
    printf("%d\n", !(5>1));       //  F    F       F          F
    return 0;
}