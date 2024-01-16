// Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0. 

#include <stdio.h>

void checkInteger(int num);

int main(){

	checkInteger(7);

	return 0;
}

void checkInteger(int num){
	if(num == 0) printf("Even.\n");

	if(num > 0 && num % 2 == 0){
		printf("Positive even.\n");
	}else if(num < 0 && num % 2 == 0){
		printf("Negative even.\n");
	}else if(num > 0 && num % 2 != 0){
		printf("Positive odd.\n");
	}else{
		printf("Negative odd.\n");
	}

}
