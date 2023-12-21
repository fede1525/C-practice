// Write a C program to compute the perimeter and area of a rectangle with a height of 7 cm and width of 5 cm.
#include <stdio.h>

int main (){

	short height = 7;
	short width = 5;
	short perimeter = (height + width) * 2;
	short area = height * perimeter;

	printf("Height: %d cm\nWidth: %d cm\nPerimeter: %d cm\nArea: %d square cm\n", height, width, perimeter, area);

	return 0;
}
