//Decrement Operator
#include<stdio.h>

int main()
{
    int a;

    a=10;

    printf("Result of post-decrement(a--): %d",a--);
    printf("\nValue of a after post-decrement: %d",a);

    a=10;

    printf("\n\nResult of pre-decrement(--a): %d",--a);
    printf("\nValue of a after pre-decrement: %d\n",a);

    return 0;
}
