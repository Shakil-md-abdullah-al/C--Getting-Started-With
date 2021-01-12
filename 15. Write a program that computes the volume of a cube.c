//Find the volume of cube while one side of a cube is given
#include<stdio.h>

int main()
{
    float volume,l;

    printf("Enter any side of a cube:\n");
    scanf("%f",&l);

    volume=l*l*l;

    printf("\nVolume of Cube is: %f\n",volume);

    return 0;
}
