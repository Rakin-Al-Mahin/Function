//02. Volume of the Sphere within function in C
#include <stdio.h>
#include <math.h>

float sphere_volume(float r)
{
    float PI = 3.1416;
    float volume;
    volume = (4.0/3.0)*PI*pow(r, 3);

    return volume;
}

int main()
{
    float r;

    printf("Enter the Radius of the Sphere: \n");
    scanf("%f", &r);

    printf("The Volume of the Sphere is: %f", sphere_volume(r));


    return 0;
}
