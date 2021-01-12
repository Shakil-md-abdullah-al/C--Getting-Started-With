#include<stdio.h>

int main()
{

    int a;
    float b;
    double c;
    char chr;


    printf("Enter an Integer:\n");
    scanf("%d",&a);
    printf("\nEnter a Floting Value:\n");
    scanf("%f",&b);
    printf("\nEnter a Double Value:\n");
    scanf("%lf",&c);
    printf("Enter a character: ");
    scanf("%c", &chr);


    printf("\nYou Entered Integer: %d",a);
    printf("\nYou Entered Float: %f",b);
    printf("\nYou Entered Double: %lf",c);
     printf("You entered %c.\n",chr);
}
