// Write a C program to compute the perimeter and area of a circle with a height of 7 cm and width of 5 cm.

#include <stdio.h>

int calculatePerimeter(int radius, float PI);	
int calculateArea(int radius, float PI);

int main(){

	int height = 7;
	int width = 5;
	int radius = width/2;
	const float PI = 3.141593;

	printf("Perimeter: %d cm\n", calculatePerimeter(radius, PI));

	printf("Area: %d cm\n", calculateArea(radius, PI));
		
	return 0;	
}


	int calculatePerimeter(int radius, float PI){
		return (2 * radius * PI);		
	}

	int calculateArea(int radius, float PI){
		return PI * radius * radius;
	}
