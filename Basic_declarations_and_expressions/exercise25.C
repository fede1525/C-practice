// Write a C program that reads an integer between 1 and 12 and prints the month of the year in English. 

#include <stdio.h>

void printMonth(int num);

int main(){

	printMonth(4);

	return 0;
}

void printMonth(int num){

	if(num > 0 && num < 13){
		char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		printf("Selected month: %s\n", months[num -1]);
	}else {
		printf("Invalid month number.");
	}
}
