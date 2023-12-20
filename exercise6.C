// Write a C program to compute the perimeter and area of a rectangle with a height of 7 cm and width of 5 cm.

#include <stdio.h>

int calculatePerimeter(int height, int width);
int calculateArea(int height, int width);

int main(){

	int height = 7;
	int width = 5;

	printf("Perimeter: %d cm\n", calculatePerimeter(height, width));

	printf("Area: %d cm\n", calculateArea(height, width));
		
	
}


	int calculatePerimeter(int height, int width){
		return (height + width) * 2;		
	}


	int calculateArea(int height, int width){
		return height * width;
	}
