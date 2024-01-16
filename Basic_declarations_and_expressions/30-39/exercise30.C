// Write a C program to find and print the square of all the even values from 1 to a specified value.

#include <stdio.h>

void squareEvenValues(int limit);

int main(){

	squareEvenValues(8);

	return 0;
}

void squareEvenValues(int limit){

	for(int i = 1; i <= limit; i++){
		if(i % 2 == 0) printf("%d ", i * i);
	}

	printf("\n");
}
