// Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes. 
// Notes: 100 , 50, 20, 10, 5, 2, 1 

#include <stdio.h>

void generateBankNotes(int amount);

int main(){

	generateBankNotes(372);

	return 0;
}


void generateBankNotes(int amount){
	
	int hundredNotes = 0;
	int fiftyNotes = 0;
	int twentyNotes = 0;
	int tenNotes = 0;
	int fiveNotes = 0;
	int twoNotes = 0;
	int oneNotes = 0;

	while(amount >= 100){
		amount = amount - 100;
		hundredNotes++;
	}

	while(amount >= 50){
		amount = amount - 50;
		fiftyNotes++;
	}

	while(amount >= 20){
		amount = amount - 20;
		twentyNotes++;
	}

	while(amount >= 10){
		amount = amount - 10;
		tenNotes++;
	}

	while(amount >= 5){
		amount = amount - 5;
		fiveNotes++;
	}

	while(amount >= 2){
		amount = amount - 2;
		twoNotes++;
	}

	while(amount >= 1){
		amount = amount - 1;
		oneNotes++;
	}

	printf("Hundred dollar notes: %d\n", hundredNotes);
	printf("Fifty dollar notes: %d\n", fiftyNotes);
	printf("Twenty dollar notes: %d\n", twentyNotes);
	printf("Ten dollar notes: %d\n", tenNotes);
	printf("Five dollar notes: %d\n", fiveNotes);
	printf("Two dollar notes: %d\n", twoNotes);
	printf("One dollar notes: %d\n", oneNotes);

}
