// Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3. 

#include <stdio.h>

void printNumbers(int num);

int main(){

	return 0;
}

void printNumbers(int num){

	for(int i = 1; i < 100; i++){
		if(i % num == 3) printf("%d ", i);
	}

	printf("\n");
}
