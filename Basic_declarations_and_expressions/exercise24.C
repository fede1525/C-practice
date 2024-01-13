// Write a C program that reads two integers and checks whether they are multiplied or not. 

#include <stdio.h>

void checkIntegers(int num1, int num2);

int main(){

	checkIntegers(5, 15);

	return 0;
}

void checkIntegers(int num1, int num2){
	
	if(num1 == num2) printf("Numbers are multiples.");

	if(num1 > num2){
		if(num1 % num2 == 0){
			printf("Numbers are multiples.");
		}else {
			printf("Numbers are not multiples.");
		}
	} else {
		if(num2 % num1 == 0){
			printf("Numbers are multiples.");
		}else {
			printf("Numbers are not multiples.");
		}
	}
}
