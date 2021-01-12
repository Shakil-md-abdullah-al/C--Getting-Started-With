//Sample calculator using c without handling denumenator 0
#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter First Number: ");
    scanf("%d",&a);

    printf("\nEnter Second Number: ");
    scanf("%d",&b);

    c=a+b;
    printf("\nThe Summation of %d and %d is: %d\n",a,b,c);

    c=a-b;
    printf("\nThe Substaction of %d and %d is: %d\n",a,b,c);

    c=a*b;
    printf("\nThe multiplication of %d and %d is: %d\n",a,b,c);

    c=a/b;
    printf("\nThe Division of %d and %d is: %d\n",a,b,c);

    c=a%b;
    printf("\nThe Modulus of %d and %d is: %d\n",a,b,c);
    
    return 0;
}

