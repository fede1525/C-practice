// Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days. 

#include <stdio.h>

void convertDays(int days);

int main(){

	convertDays(766);

	return 0;
}



void convertDays(int days){

	int years = days / 365;

	int months = (days % 365) / 30;

	int remainingDays = days % 30;

	printf("%d years %d months %d days\n", years, months, remainingDays);

}
