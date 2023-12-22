// Write a C program that accepts two integers from the user and calculates the product of the two integers. 

#include<stdio.h>

int main(){

	int num1, num2;

	printf("Enter the first number: \n");

	scanf("%d", &num1);

	printf("Enter the second number: \n");

	scanf("%d", &num2);

	int result = num1 * num2;

	printf("Result: %d\n", result);

	return 0;
}
