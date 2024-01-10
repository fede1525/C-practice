// Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80. 

#include <stdio.h>

void checkRange(int number);

int main(){

	checkRange(18);

	return 0;
}

void checkRange(int number){

	if(number >= 0 && number <= 20){
		printf("Range: [0-20]\n");
	}

	if(number > 20 && number <= 40){
		printf("Range: [21-40]\n");
	}

	if(number > 40 && number <= 60){
		printf("Range: [41-60]\n");
	}

	if(number > 60 && number <= 80){
		printf("Range: [61-80]\n");
	}

	if(number < 0 || number > 80){
		printf("Error. Out of range.\n");
	}
}
