// Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid. 

#include <stdio.h>

void calculateTrianglePerimeter(float num1, float num2, float num3); 
bool isTrianglePossible(float num1, float num2, float num3);

int main(){
	
	calculateTrianglePerimeter(25, 15, 35);

	return 0;
}

void calculateTrianglePerimeter(float num1, float num2, float num3){
	
	float perimeter = num1 + num2 + num3;

	if(isTrianglePossible(num1, num2, num3)){
		printf("Triangle possible.\nPerimeter: %f", perimeter);
	} else {
		printf("Triangle not possible.");
	}

}

bool isTrianglePossible(float num1, float num2, float num3){

		if((num1 + num2) > num3 && (num1 + num3) > num2 && (num2 + num3) > num1) return true;
		return false;
}
