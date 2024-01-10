// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots. 

#include <cmath>
#include <stdio.h>
#include <math.h>

void calculateBhaskara(float a, float b, float c);

int main(){

	float a,b,c;
	
	printf("Enter the value of a: ");
	scanf("%f", &a);

	printf("Enter the value of b: ");
	scanf("%f", &b);

	printf("Enter the value of c: ");
	scanf("%f", &c);

	calculateBhaskara(a, b, c);

	return 0;
}


void calculateBhaskara(float a, float b, float c){
	float discriminant = pow(b, 2) - 4*a*c;
	float root1 = (-b + sqrt(discriminant)) / (2 * a);
	float root2 = (-b - sqrt(discriminant)) / (2 * a);

	if(discriminant >= 0){

		if(root1 == root2){
			printf("Root: %f\n", root1);
		} else {
			printf("Root 1: %f\n", root1);
			printf("Root 2: %f\n", root2);
		}
	} else {
		printf("No real roots");
	}
	
}
