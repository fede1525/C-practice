// Write a C program that prints all even numbers between 1 and 50 (inclusive). 

#include <stdio.h>

void printEvenNumbers();

int main(){

	printEvenNumbers();

	return 0;
}

void printEvenNumbers(){

	for(int i = 0; i <= 50; i++){
		if(i % 2 == 0) printf("%d ", i);
	}
}
