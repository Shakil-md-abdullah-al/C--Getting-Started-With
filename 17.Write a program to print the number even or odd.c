//A program to find the number whether it even or odd
#include<stdio.h>

int main()
{
    int a;

    printf("Enter an Integer to check whether it even or odd:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\n %d is an Even number\n",a);
    }
    else
    {
        printf("\n %d is an Odd number\n",a);
    }

    return 0;
}
