//Write a program to print the number positive, negative or nutral
#include<stdio.h>

int main()
{
    int a;

    printf("Enter a number to check:");
    scanf("%d",&a);

    if(a>0)
        printf("\n %d is a positive number\n",a);
    else if(a<0)
        printf("\n %d is a negative number\n",a);
    else
        printf("\n %d is a nutrual number\n",a);

    return 0;
}
