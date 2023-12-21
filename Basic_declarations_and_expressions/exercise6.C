// Write a C program to compute the perimeter and area of a circle with a given radius. 

#include <stdio.h>
#include <math.h>

int main() {
    double radius = 5.0;
	double PI = 3.141593;
    double perimeter = 2 * PI * radius;
    double area = PI * pow(radius, 2);

    printf("Circle Perimeter: %.2f cm\n", perimeter);
    printf("Circle Area: %.2f square cm\n", area);

    return 0;
}
