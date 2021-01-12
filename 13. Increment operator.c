//Increment Operator
#include<stdio.h>

int main()
{
    int a;

    a=10;

    printf("Result of post-increment(a++): %d",a++);
    printf("\nValue of a after post-increment: %d",a);

    printf("\n\nResult of pre-increment(++a): %d",a++);
    printf("\nValue of a after pre-increment: %d\n",a);

    return 0;
}
