// Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.  

#include <stdio.h>

int main(){

	int days = 2546;
	int years = days / 365;
	int weeks = days / 7;
	int months = days / 30;

	printf("%d is equal to: %d years\n", days, years);
	printf("%d is equal to: %d months\n", days, months);
	printf("%d is equal to: %d weeks\n", days, weeks);


	return 0;
}
