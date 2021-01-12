//Print the maximum value in a program
#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three integer to find the maximum among them\n");
    printf("\nEnter First Integer:");
    scanf("%d",&a);

    printf("\nEnter Second Integer:");
    scanf("%d",&b);

    printf("\nEnter Third Integer:");
    scanf("%d",&c);

    if((a>b)&&(a>c))
        printf("\nMaximum value is: %d\n",a);
    else if((b>a)&&(b>c))
        printf("\nMaximum value is: %d\n",b);
    else
        printf("\nMaximum Value is: %d\n",c);

    return 0;

}
