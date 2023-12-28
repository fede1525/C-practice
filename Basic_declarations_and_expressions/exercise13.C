// Write a C program that accepts three integers and finds the maximum of three. 

#include <stdio.h>

int maximumThree(int num1, int num2, int num3);

int main(){

	int num1, num2, num3;

	printf("Enter the first number: \n");
	scanf("%d", &num1);
	printf("Enter the second number: \n");
	scanf("%d", &num2);
	printf("Enter the third number: \n");
	scanf("%d", &num3);

	printf("Largest number: %d", maximumThree(num1, num2 , num3));
	return 0;
}

int maximumThree(int num1, int num2, int num3){
	int maxNum = num1;

	if(num2 > maxNum) maxNum = num2;
	if(num3 > maxNum) maxNum = num3;


	return maxNum;
}
