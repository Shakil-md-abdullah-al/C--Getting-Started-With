//A program to print wheather a given year is leap year or not
#include<stdio.h>

int main()
{
    int year;

    printf("Enter a Year: ");
    scanf("%d",&year);

    if((year%400==0)||(year%100!=100)&&(year%4==0))
        printf("\nThis is a Leap year\n");
    else
        printf("\nThis is not a Leap Year\n");

    return 0;

}
