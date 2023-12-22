// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.

#include <stdio.h>

int main(){

	float weight1, num1, weight2, num2;

	printf("Enter the first item's weight: \n");
	scanf("%f", &weight1);

	printf("Enter the first item's number of purchases: \n");
	scanf("%f", &num1);

	printf("Enter the second item's weight: \n");
	scanf("%f", &weight2);

	printf("Enter the second item's number of purchases: \n");
	scanf("%f", &num2);

	float averageWeight = (weight1 + weight2) / 2;
	float averageNum = (num1 + num2) / 2;

	printf("Average weight: %f\nAverage number of purchases: %f", averageWeight, averageNum);

	return 0;
}
